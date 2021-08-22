#ifndef __LINKED_LIST_HPP__
#define __LINKED_LIST_HPP__

#include "node.hpp"

template <typename TYPE>
class LinkedList
{
public:
    iterator<TYPE> Begin();
    iterator<TYPE> End();

private:
    Node<TYPE> *head;
};




#endif //__LINKED_LIST_HPP__