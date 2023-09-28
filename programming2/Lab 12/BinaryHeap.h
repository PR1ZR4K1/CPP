#ifndef BINARY_HEAP_H
#define BINARY_HEAP_H

#include <cassert>
#include "Vector.h"
using namespace std;

template <typename T>
class BinaryHeap
{
    public:
        BinaryHeap(int capacity = 100)
            : theheap(capacity + 1), theSize{ 0 }
        {}
        BinaryHeap(const Vector<T>& items)
            : theheap(items.size() + 10), theSize{ items.size() }
        {
            for (int i = 0; i < items.size(); i++)
                theheap[i + 1] = items[i];
            buildHeap();
        }

        void insert(const T& x)
        {
            if(theSize == theheap.size( ) - 1)
                theheap.resize( theheap.size() * 2);
            int hole = theSize +1;
            theSize++;
            T copy = x;
            theheap[ 0 ] = copy;
            for(; x < theheap[ hole / 2 ]; hole /= 2)
                theheap[ hole ] =  theheap[ hole / 2 ] ;    
            theheap[ hole ] = theheap[0];
        }

        const T & findMin() const
        {
            assert(!theheap.empty());
            return theheap[ 1 ];
        }

        void deleteMin()
        {
            assert(!theheap.empty());
            theheap[ 1 ] = theheap[ theSize ];
            theSize--;
            percolateDown( 1 );
        }

        bool empty() const
            { return theSize == 0; }

        void deleteMin( T & minItem )
        {
            assert(!theheap.empty());
            minItem = theheap[ 1 ];
            theheap[ 1 ] = theheap[ theSize ];
            theSize--;
            percolateDown( 1 );
        }

        void makeEmpty()
        {
            theSize = 0;
        }

        void print_heap()
        {
            cout << endl;
            if (empty())
                cout << "Heap is empty" << endl;
            else
                print_heap(1, 0);
            cout << endl;
        }

    private:
        int theSize;
        Vector<T> theheap;

        void buildHeap()
        {
            for(int i = theSize / 2; i > 0; i--)
                percolateDown(i);       
        }

        void percolateDown( int hole )
        {
            int child;
            T tmp = theheap[hole];
            for(; hole *2 <= theSize; hole = child)
            {
                child = hole * 2;
                if (child != theSize && theheap[ child + 1 ] < theheap[ child ] )
                    child++;
                
                if (theheap[ child ] < tmp)
                    theheap[ hole ] = theheap[ child ];
                else
                    break;
            }
            theheap[ hole ] = tmp;
        } 

        void print_heap(int index, int offset)
        {
            if (index > theSize)
                return;
            
            for (int i = 1; i <= offset; i++)
            {
                cout << "..";
            }

            cout << theheap[index] << endl;
            print_heap(index * 2, offset + 1);
            print_heap(index * 2 + 1, offset + 1);

        }
        
};


#endif