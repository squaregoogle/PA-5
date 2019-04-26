#pragma once
#include "Queue.h"
#include "Data.h"
#include "QueueNode.h"

class TestQueue
{
public:
	//tests Enqueue function on empty
	void testEnqueueOnEmpty();
	//tests Enqueue with one node
	void testEnqueueOnOneNode();
	//tests Dequeue with one node
	void testDequeueOnOneNode();
	//tests Dequeue with two nodes
	void testDequeueOnTwoNode();
};
