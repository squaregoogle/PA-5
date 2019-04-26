#pragma once
#include "QueueNode.h"

class Queue
{
public:
	//constructor
	Queue();
	//prints out the Queue
	void printQueue();
	//Adds item to queue
	bool enqueue(Data *newData);
	//Deletes item from queue
	Data  dequeue();
	//checks to see if the Queue is empty
	bool isEmpty();
	//setters
	void setpHead(QueueNode *newpHead);
	void setpTail(QueueNode *newpTail);
	//getters
	QueueNode *getpHead() const;
	QueueNode *getpTail() const;
private:
	//priavte members, the head and tail pointer of the queue
	QueueNode *pHead;
	QueueNode *pTail;
};
