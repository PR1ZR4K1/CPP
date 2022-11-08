// 1. (Operator Overloading for Structs) Write a C++ program for this question. Submit with .cpp file and screenshots of running program. You are going to need the storeItem struct that you created in Lab2.
//     a. (Relational Operators) Let’s say that for our hypothetical clothes-store program, we want to use the comparison operator ‘==’ to detect accidental duplicates in our inventory.
//         i. Overload the comparison operator ‘==‘ so that it may be used on struct storeItem.
//     b. (Arithmetic Binary Operators) Say that we also want to utilize the add-and-assignment operator ‘+=’ so that we can add new units to our quantity whenever a new shipment arrives.
//         i. Overload the add-and-assignment operator ‘+=‘ for storeItem. The second operand will be an int a. The result is that quantity is increased by a.
//     c. (Arithmetic Unary Operators) Whenever a customer makes a return, we add one item to quantity.
//         i. Overload the pre-increment operator ‘++‘ for storeItem. The result is that quantity incremented.
//     d. Test that it works with the following int main() and add comments to it:

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

    bool operator==(storeItem a) {
       if (a.itemName == itemName && a.price == price && a.quantity == quantity)
       {
          return true;
       }
       else
       {
          return false;
       }
    }

    void operator+=(int a) {
       quantity += a;
    }

    void operator++() {
        quantity++;
    }
};

#include <iostream>
#include <string>
#include <vector>

using namespace std;

//storeItem struct goes here

int main()
{
	storeItem item1("Shirt", 50, 25.00);
	storeItem item2("Shirt", 50, 25.00);
	storeItem item3("Hoodie", 50, 50.00);

	if (item1 == item2)
	{
		cout << "Item 1 and Item 2 are duplicates." << endl << endl;
	}
	else
	{
		cout << "Item 1 and Item 2 are NOT duplicates." << endl << endl;
	}

	cout << "Of the following item '" << item3.itemName << "', we currently have " << item3.quantity << " in stock." << endl;

	int hoodieShipment = 30;
	item3 += hoodieShipment;
	cout << "A shipment of " << hoodieShipment << " hoodies has arrived." << endl;
	cout << "Of the following item '" << item3.itemName << "', we now have " << item3.quantity << " in stock." << endl << endl;

	++item3;
	cout << "A customer returned their hoodie." << endl;
	cout << "Of the following item '" << item3.itemName << "', we now have " << item3.quantity << " in stock." << endl;

}