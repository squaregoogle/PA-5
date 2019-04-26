#include "Queue.h"
#include "TestQueue.h"

int main(void)
{
	Queue Express;
	Queue General;
	int express = 0, general = 0;



	TestQueue t;
	t.testEnqueueOnEmpty();
	t.testEnqueueOnOneNode();
	t.testDequeueOnOneNode();
	t.testDequeueOnTwoNode();

	srand((unsigned int) time(nullptr));

	return 0;
}