#include <string>
#include <iostream>
#include <vector>

struct storeItem {
    std::string itemName;
    int quantity;
    double price;

    storeItem()
    {
        itemName = "";
        quantity = 0;
        price = 0;
    }

    storeItem(std::string n, int q, double p)
    {
        // “shorts”, 40, and 20.00
        itemName = n;
        quantity = q;
        price = p;

    }
};

void printStoreItem(storeItem s){
    std::cout << "Item: " << s.itemName << std::endl;
    std::cout << "Quantity: " << s.quantity << std::endl;
    std::cout << "Price: " << s.price << std::endl;
}

int main()
{
    storeItem item1;
    item1.itemName = "Shirt";
    item1.quantity = 50;
    item1.price = 25.0;

    printStoreItem(item1);

    storeItem item2;
    printStoreItem(item2);

    storeItem item3("Shorts", 40, 20);

    printStoreItem(item3);

    std::vector<storeItem> inventory{item1, item2, item3};
    return 1;
}