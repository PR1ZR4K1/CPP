// for CSE 2020, Spring 2023, HW5

#include <iostream>
#include "BinarySearchTree.h"
#include "Random.h"
using namespace std;

// Student Completer
//
// Name:____________________________________   SID:___________________


template <typename T>
void balance_BST(BinarySearchTree<T>&);
template <typename T>
void balance_BST_inner(const Vector<T>&, int, int, BinarySearchTree<T>&);

int main()
{
	rand_seed();
	BinarySearchTree<int> mybst;
	int how_many;
	cout << "How many random values? ";
	cin >> how_many;

	for (int i = 1; i <= how_many; i++)
	{
		mybst.insert(rand_int(1, 250));
	}
	cout << endl << how_many << " values entered" << endl << endl;

	mybst.printTree();
	cout << endl << endl;
	mybst.printInternal();
	cout << endl;
	cout << "This BST has depth " << mybst.depth();
	cout << endl << endl;

	balance_BST(mybst);

	cout << "The BST after balancing:" << endl << endl;
	mybst.printTree();
	cout << endl << endl;
	mybst.printInternal();
	cout << endl;
	cout << "This BST has depth " << mybst.depth();
	cout << endl << endl;

	return 0;
}

// stand-alone function that produced balanced bst
// from sorted vector; THIS FUNTION IS COMPLETE; 
// DO NOT CHANGE;
template <typename T>
void balance_BST(BinarySearchTree<T>& bst)
{
	Vector<T> values;
	bst.collect(values);
	// vector values now contains bst values in
	// ascending order;
	bst.makeEmpty();
	// rebuild the BST in balanced form from
	// all vector elements from first to last index
	balance_BST_inner(values, 0, values.size() - 1, bst);
	return;
}

// Doing the "work" of building a balanced BST from vector;
// assumes that vec is vector of values in ascending order
// build BST from vector element at indeces low to high

// *** COMPLETE THIS FUNCTION IN HW ASSIGNMENT 5 ***

template <typename T>
void balance_BST_inner(const Vector<T>& vec, int low, int high, BinarySearchTree<T>& bst)
{
    if (low > high) {
        return; // case: low overtakes high; no elements; return;
    }

    // case: single element; insert to bst; return;
    if (low == high) {
        bst.insert(vec[low]);
        return;
    }

    // case: multiple elements
    int mid = (low + high) / 2; // middle index
    bst.insert(vec[mid]); // insert middle element to bst
    balance_BST_inner(vec, low, mid - 1, bst); // left subBST
    balance_BST_inner(vec, mid + 1, high, bst); // right subBST
}

