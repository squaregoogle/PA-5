#pragma once
#include "Data.h"

class QueueNode
{
public:
	//constructor
	QueueNode(Data *newData);
	//deconstructor
	~QueueNode();
	//setters
	void setData(Data *newData);
	void setNextPtr(QueueNode *newNext);
	//getters
	Data *getData() const;
	QueueNode *getNextPtr() const;
private:
	//private members, the Data and next pointer of the node
	Data *pData;
	QueueNode *pNext;
};
