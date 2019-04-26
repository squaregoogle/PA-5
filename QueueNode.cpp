#include "QueueNode.h"
//constructor
QueueNode::QueueNode(Data *newData)
{
	pData = newData;
	pNext = nullptr;
}
//deconstructor
QueueNode::~QueueNode()
{
	cout << "Inside QueueNode deconstructor" << endl;
}
//setters
void QueueNode::setData(Data *newData)
{
	this->pData = newData;
}

void QueueNode::setNextPtr(QueueNode *newNext)
{
	this->pNext = newNext;
}
//getters
Data * QueueNode::getData() const
{
	return this->pData;
}

QueueNode * QueueNode::getNextPtr() const
{
	return this->pNext;
}