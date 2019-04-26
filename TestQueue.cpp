#include "TestQueue.h"
//Enqueue empty test
void TestQueue::testEnqueueOnEmpty()
{
	Queue q;
	Data temp;
	
	bool success = false;

	success = q.enqueue(&temp);

	if (success)
	{
		cout << "Test Enqueue on empty works\n" << endl;
	}
}
//Enqueue one node test
void TestQueue::testEnqueueOnOneNode()
{
	Queue q;
	
	Data temp;
	QueueNode *pMem = q.getpHead();
	
	q.setpHead(pMem);
	bool success = false;
	 
	success = q.enqueue(&temp);

		if (success)
		{
			cout << "\nTest Enqueue on one node works\n" << endl;
		}
}
//Dequeue one node test
void TestQueue::testDequeueOnOneNode()
{
	Queue q;

	Data temp;
	temp.setCustomerNumber(6);
	temp.setServiceTime(7);
	temp.setTotalTime(13);
	QueueNode *pMem = new QueueNode(&temp);
	//QueueNode *pMem = q.getpHead();
	pMem->setData(&temp);
q.setpHead(pMem);
	q.setpTail(pMem);
	q.dequeue();



	if (q.getpHead() == nullptr)
	{
		cout << "\nTest Dequeue on one node works\n" << endl;
	}
}
//Dequeue two node test
void TestQueue::testDequeueOnTwoNode()
{
	Queue q;

	Data temp;

	temp.setCustomerNumber(6);
	temp.setServiceTime(7);
	temp.setTotalTime(13);

	QueueNode *pMem = new QueueNode(&temp);
	q.setpHead(pMem);
	pMem->setNextPtr(q.getpTail());
	q.setpTail(pMem);
	q.dequeue();



	if (q.getpHead() == q.getpTail())
	{
		cout << "\nTest Dequeue on two nodes works\n" << endl;
	}
}