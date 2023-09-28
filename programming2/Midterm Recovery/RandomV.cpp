#include <cassert>
#include <iostream>
#include "RandomV.h"

using namespace std;

void rand_seed()
{
	int seed = static_cast<int>(time(0));
	srand(seed);
}

// random integer between a and b;
int rand_int(int a, int b)
{
	return a + rand() % (b - a + 1);
}

// negs * 10% chance of negative number; repeats allowed; 
// absolute value between from and upto;


void random_vector(int k, int from, int upto, Vector<int>& v, int negs)
{
	rand_seed();
	v.clear();

	int rnum;
	int rneg;
	for (int i = 1; i <= k; i++)
	{
		rnum = rand_int(from, upto);
		if (negs > 0)
		{
			rneg = rand_int(1, negs + 1);
			if (rneg < negs)
				v.push_back(-rnum);
			else
				v.push_back(rnum);
		}
		else
			v.push_back(rnum);
	}
	return;
}

