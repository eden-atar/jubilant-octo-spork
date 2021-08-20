
#ifndef __FIXED_SIZE__QUEUE__
#define __FIXED_SIZE__QUEUE__

template <typename TYPE>
class Stack
{
public:
	Stack(size_t size);
	~Stack();
	TYPE Peek();
	void Pop();
	void Push(TYPE data);
	bool IsEmpty();
	size_t Size();

private:
	size_t m_size;
	TYPE *m_arr;
	size_t m_front;
};

template <typename TYPE>
Stack<TYPE>::Stack(size_t size) : m_size(size), m_front(0) { m_arr = new TYPE[m_size]; }

template <typename TYPE>
Stack<TYPE>::~Stack(){ delete m_arr; }

template <typename TYPE>
TYPE Stack<TYPE>::Peek()
{
	return (this->m_arr[m_front - 1]);
}

template <typename TYPE>
void Stack<TYPE>::Pop()
{
	m_front--;
}

template <typename TYPE>
void Stack<TYPE>::Push(TYPE data)
{
	this->m_arr[m_front] = data;
	this->m_front++;
}

template <typename TYPE>
bool Stack<TYPE>::IsEmpty()
{
	return (this->m_front == 0);
}

template <typename TYPE>
size_t Stack<TYPE>::Size()
{
	return (m_front);
}

#endif //__FIXED_SIZE__QUEUE__

