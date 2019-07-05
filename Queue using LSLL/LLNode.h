#ifndef LLNODE_H
#define LLNODE_H

template<class T>
class LLNode
{
public:
	T data;
	LLNode<T>*next;
	LLNode();
	LLNode(T);
	~LLNode();
};

#endif