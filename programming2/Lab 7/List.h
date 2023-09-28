#ifndef LIST_H
#define LIST_H

#include <algorithm>
using namespace std;

template <typename T>
class List
{
    private: 
        struct Node             // local struct for class
        {
            T data;
            Node *prev;
            Node *next;

            Node ( const T & d = T{ }, Node * p = nullptr, Node * n = nullptr)
                : data { d }, prev{ p }, next{ n } { }
        };

        int theSize;
        Node *head;
        Node *tail;

        // an initializer function that sets the linked list to be empty
        void init()
        {
            theSize = 0;
            head = new Node;
            tail = new Node;
            head -> next = tail;
            tail -> prev = head;
        }

    public:
        class const_iterator
        {
            public:
                const_iterator() : current{ nullptr }
                { }
                
                const T & operator* () const 
                { return retrieve (); }

                const_iterator & operator++ () 
                { 
                    current = current -> next;
                    return *this;
                }

                const_iterator operator++ ( int )
                {
                    const_iterator old = *this;
                    ++( *this );
                    return old;
                }

                const_iterator & operator-- ()
                {
                    current = current -> prev;
                    return *this;
                }

                const_iterator operator-- ( int )
                {
                    const_iterator old = *this;
                    --( *this );
                    return old;
                }

                bool operator== ( const const_iterator &rhs ) const
                    { return current == rhs.current; }
                
                bool operator!= ( const const_iterator &rhs ) const
                    { return !( *this == rhs ); }

            protected:
                Node *current;
                T & retrieve() const
                    { return current->data; }

                const_iterator( Node *p ) : current{ p }
                { }

                friend class List<T>;

        };

        class iterator: public const_iterator
        {
            public:
                iterator()
                { }

                T & operator* ()
                    { return const_iterator::retrieve(); }

                const T & operator* () const
                    { return const_iterator::operator*();}

                iterator & operator++ ()
                {
                    this->current = this->current->next;
                    return *this;
                }

                iterator operator++ ( int )
                {
                    iterator old = *this;
                    ++( *this );
                    return old;
                }

                iterator & operator-- ()
                {
                    this->current = this->current->prev;
                    return *this;
                }

                iterator operator-- ( int )
                {
                    iterator old = *this;
                    --( *this );
                    return old;
                }
            protected:
                
                iterator( Node *p ) : const_iterator{ p }
                { }
                friend class List<T>;
        };

        List()
            { init(); }

        ~List()
        {
            clear();
            delete head;
            delete tail;
        }

        List ( const List & rhs )
        {
            init();

            for (const_iterator itr = rhs.begin(); itr != rhs.end(); ++itr)
            {
                push_back(*itr);
            }
        }

        List & operator= ( const List & rhs )
        {
            List copy = rhs;

            swap( *this, copy );
            return *this;
        }

        iterator begin() const
        {
            return iterator ( head->next );
        }

        iterator end()
        {
            return iterator( tail );
        }

        iterator erase( iterator itr )
        {
            Node *p = itr.current;
            iterator retVal (p->next);
            p->prev->next = p->next;
            p->next->prev = p->prev;
            delete p;
            --theSize;

            return retVal;
        }

        iterator insert( iterator itr, const T & x )
        {
            Node *p = itr.current;
            ++theSize;
            return iterator( p->prev = p->prev->next = new Node{ x, p->prev, p } );
        }
        
        const_iterator end() const
        {
            return const_iterator( tail ); 
        }

        int size() const
            { return theSize;}

        bool empty() const
            { return size() == 0; }

        void clear()
        {
            while(!empty())
            {
                pop_front();
            }
        }

        T & front()
        {
            return *begin();
        }

        T & back()
            { return *--end(); }
        
        const T & back() const
            { return *--end(); }

        void push_front( const T & x)
            { insert( begin(), x ); }

        void push_back( const T & x)
            { insert( end(), x ); }

        void pop_front()
            { erase( begin() ); }

        void pop_back()
            { erase( --end() ); }

        List(List&& rhs)
            : theSize{ rhs.theSize }, head{ rhs.head }, tail{ rhs.tail }
        {
            rhs.theSize = 0;
            rhs.head = nullptr;
            rhs.tail = nullptr;
        }

        List& operator= (List&& rhs)
        {
            swap( theSize, rhs.theSize );
            swap( head, rhs.head );
            swap( tail, rhs.tail );

            return *this;
        }
};
#endif