#ifndef __NODE_HPP__
#define __NODE_HPP__

template <typename TYPE>
class Node
{
public:
    Node(TYPE data);
private:
    TYPE m_data;
};

template <typename TYPE>
Node<TYPE>::Node(TYPE data) : m_data(data) { }

#endif //__NODE_HPP__