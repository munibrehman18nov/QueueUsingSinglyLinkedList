#ifndef LLQUEUE_H
#define LLQUEUE_H
#include"LLQueue.h"
#include"LLNode.h"

template <typename T>
class LLQueue
{
	LLNode<T>*rear;
	LLNode<T>*front;
	LLNode<T>*createNode(T);
public:
	LLQueue();
	//LLQueue(const LLQueue<T> &);
	//LLQueue& operator = (const LLQueue<T> &);
	void enQueue(const T);
	T deQueue();
	~LLQueue();
};

#endif