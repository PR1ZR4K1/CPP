#ifndef SEARCHING.h
#define SEARCHING.h
#include "Vector.h"
#include "List.h"

template <typename T>
int linear_search_V(const Vector<T>& vec, const T& target)
{
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == target)
        {
            return i;
        }
    }
    return -1; // not found
}

template <typename T>
typename List<T>::const_iterator linear_search_L(const List<T>& lst, const T& target)
{
    List<T>::const_iterator itr;
    for (itr = lst.begin(); itr != lst.end(); ++itr)
    {
        if (*itr == target)
        {
            return itr;
        }
    }
    return lst.end(); // not found
}

template <typename T>
int rec_linear_search_V(int k, const Vector<T>& vec, const T& target)
{
    if (vec.empty() || k >= vec.size())
    {
        return -1;
    }
    if (vec[k] == target)
    {
        return k;
    }

    return rec_linear_search_V(k + 1, vec, target)
}

template <typename T>
typename List<T>::const_iterator rec_linear_search_L(const List<T>& lst, const T& target)
{
    if (vec.empty() || k >= vec.size())
    {
        return -1;
    }
    if (vec[k] == target)
    {
        return k;
    }

    return rec_linear_search_V(k + 1, vec, target)
}

#endif SEARCHING.h