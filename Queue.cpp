#include "Queue.h"
//constructor
Queue::Queue()
{
	this->pHead = nullptr;
	this->pTail = nullptr;
}
//setters
void Queue::setpHead(QueueNode *newpHead)
{
	this->pHead = newpHead;
}

void Queue::setpTail(QueueNode *newpTail)
{
	this->pTail = newpTail;
}
//getters
QueueNode * Queue::getpHead() const
{
	return this->pHead;
}

QueueNode * Queue::getpTail() const
{
	return this->pTail;
}
//Enqueue, adds item to list
bool Queue::enqueue(Data *newData)
{
	QueueNode *pMem = new QueueNode(newData);
	bool success = false;

	if (pMem != nullptr)
	{
		success = true;
		if (this->pHead == nullptr)
		{
			this->pHead = pMem;
			this->pTail = pMem;
		}
		else
		{
			this->pTail->setNextPtr(pMem);
			this->pTail = pMem;
		}
}
	return success;
}
//Dequeue, deletes item from list
Data  Queue::dequeue()
{
	Data temp;

	QueueNode *pTemp = this->pHead;

	if (this->pTail->getData() == this->pHead->getData())
	{
	pTemp->setData(this->pHead->getData());
		//pTemp = this->pHead;
		this->pHead = nullptr;
		this->pTail = nullptr;
		temp = *pTemp->getData();
		delete pTemp;
	}
	else
	{
		pTemp->setData(this->pHead->getData());
		//pTemp = this->pHead;
		this->pHead = this->pHead->getNextPtr();
		temp = *pTemp->getData();
		delete pTemp;
	}
	return temp;
}
//checks if queue is empty
bool Queue::isEmpty()
{
	bool success = false;
	if (this->pHead == nullptr)
	{
		success = true;
	}
	return success;
}
//prints out the queue
void Queue::printQueue()
{
	QueueNode *pCur = pHead;
	QueueNode *pPrev = nullptr;
	

	while (pCur != nullptr)
	{
		cout << pCur->getData() << endl;
		pPrev = pCur;
		pCur = pCur->getNextPtr();
	}
}