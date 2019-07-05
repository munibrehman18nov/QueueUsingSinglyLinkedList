#include "LLQueue.h"
#include"NotAllowed.h"

template<typename T>
LLQueue<T>::LLQueue()
{
	rear = front = nullptr;
}
template<class T>
LLNode<T>* LLQueue<T>::createNode(T val)
{
	LLNode<T>*n = new LLNode<T>(val);
	return n;
}
template<typename T>
void LLQueue<T>::enQueue(T val)
{
	LLNode<T>*t = 0;
	LLNode<T>*temp = createNode(val);
//	rear->next = temp;
	if (rear == nullptr)
	{
		rear = temp;
		front = temp;
	}
	else
	{
		rear->next = createNode(val);
		rear = rear->next;
	}
}
template<typename T>
T LLQueue<T>::deQueue()
{
	LLNode<T>*r = front;
	T val = r->data;
	front = front->next;
	try
	{
		if (rear == nullptr)
		{
			throw(NotAllowed("Queue is Empty.\n"));
		}
		delete r;
		r = nullptr;
		return val;
	}
	catch (NotAllowed&n)
	{
		n.printMsg();
	}
}
/*template<typename T>
LLQueue<T>::LLQueue(const LLQueue<T> &ref)
{
capacity = ref.capacity;
top = ref.top;
data = new T[capacity];
for (int i = 0; i < capacity; i++)
data[i] = ref.data[i];
}
template<typename T>
LLQueue<T>& LLQueue<T> ::operator = (const LLQueue<T> &ref)
{
capacity = ref.capacity;
top = ref.top;
data = new T[capacity];
for (int i = 0; i < capacity; i++)
data[i] = ref.data[i];
return (*this);
}
*/
template<typename T>
LLQueue<T>::~LLQueue()
{

}
template LLQueue<int>;