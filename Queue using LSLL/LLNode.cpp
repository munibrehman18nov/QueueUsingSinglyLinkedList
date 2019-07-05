#include "LLNode.h"

template<class T>
LLNode<T>::LLNode()
{
	data = 0;
	next = nullptr;
}
template<class T>
LLNode<T>::LLNode(T val)
{
	data = val;
	next = nullptr;
}
template<class T>
LLNode<T>::~LLNode()
{
}
template LLNode<int>;