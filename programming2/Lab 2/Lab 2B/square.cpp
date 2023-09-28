/**
 * 
 * Class and Member Function definitions
 * 
*/

#include  "square.h"

square::square(std::string fN, std::vector<std::vector<int>> & mQ):
            fileName(fN), magicSQ(mQ){

    std::ifstream inp;
    std::vector<int> nums;
    inp.open(fileName);
    int next;
    inp >> next;

    while (!inp.fail())
    {
        nums.push_back(next);
        inp >> next;
    }
    inp.close();

    assert(sqrt(nums.size()) == floor(sqrt(nums.size())));

    int n = static_cast<int>(sqrt(nums.size()));

    int k = 0;
    
    for (int i = 1; i <= n; i++)
    {
        std::vector<int> row;
        for (int j = 1; j <= n; j++)
        {
            row.push_back(nums[k]);
            k++;
        }
        magicSQ.push_back(row);
    }
    return;
}

square::~square()
{
}

// print out the magic square.
void square::print_magic()
{
    std::cout << std::endl;
    for (int i = 0; i < magicSQ.size(); i++)
    {
        for (int j = 1; j <= magicSQ.size(); j++)
            if (magicSQ[i][j] == 0)
            {
                std::cout << std::left << std::setw(6) << "~" << " ";
            }
            else 
            {
                std::cout << std::left << std::setw(6) << magicSQ[i][j] << " ";
            }
            std::cout << std::endl;
    }
    std::cout << std::endl;
    return;
}


int square::row_sum(int i)
{
    int dim = magicSQ[0].size();
    int sum = 0;
    for (int j = 0; j < dim; j++)
    {
        sum += magicSQ[i][j];
    }
    return sum;
}

int square::col_sum(int j)
{
    int dim = magicSQ[0].size();
    int sum = 0;
    for (int i = 0; i < dim; i++)
    {
        sum += magicSQ[i][j];
    }
    return sum;
}

int square::diag1_sum()
{
    int dim = magicSQ[0].size();
    int sum = 0; 
    
    for (int i = 0; i < dim; i++)
    {
        sum += magicSQ[i][i];
    }
    return sum;
}

int square::diag2_sum()
{
    int dim = magicSQ[0].size();
    int sum = 0; 
    
    for (int i = dim - 1, j = 0; j < dim; i--, j++)
    {
        sum += magicSQ[i][j];
    }
    return sum;
}

bool square::test_magic()
{
    int dim = magicSQ[0].size();
    int rsum = row_sum(0);

    for (int i = 1; i < dim; i++)
    {
        if (row_sum(i) != rsum)
        {
            return false;
        }
    }

    for (int i = 1; i < dim; i++)
    {
        if (col_sum(i) != rsum)
        {
            return false;
        }
    }

    if (diag1_sum() != rsum || diag2_sum() != rsum)
    {
        return false;
    }

    msum = rsum;
    return true;
}

int square::magic_sum()
{
    return msum;
}