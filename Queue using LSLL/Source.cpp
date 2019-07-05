#include<iostream>
using namespace std;
#include"LLQueue.h"
int main()
{
	LLQueue<int> s;
	s.enQueue(1);
	s.enQueue(2);
	s.enQueue(3);
	s.enQueue(4);
	cout << s.deQueue() << endl;
	cout << s.deQueue() << endl;
	s.enQueue(6);
	s.enQueue(5);
	cout << s.deQueue() << endl;
	cout << s.deQueue() << endl;
	cout << s.deQueue() << endl;
	cout << s.deQueue() << endl;
}