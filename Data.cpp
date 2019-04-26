#include "Data.h"
//construcor
Data::Data()
{
	this->customerNumber = 0;
	this->serviceTime = 0;
	this->totalTime = 0;
}
//deconstructor
Data::~Data()
{
	cout << "Inside Data deconstructor" << endl;
}
//setters
void Data::setCustomerNumber(int newCustomerNumber)
{
	this->customerNumber = newCustomerNumber;
}

void Data::setServiceTime(int newServiceNumber)
{
	this->serviceTime = newServiceNumber;
}

void Data::setTotalTime(int newTotalTime)
{
	this->totalTime = newTotalTime;
}
//getters
int Data::getCustomerNumber() const
{
	return this->customerNumber;
}

int Data::getServiceTime() const
{
	return this->serviceTime;
}

int Data::getTotalTime() const
{
	return this->totalTime;
}
//Number generator
void Data::RandomNumGen(int Express, int General)
{
	Express = rand() % 5 + 1;
	General = rand() % 5 + 3;
}