#pragma once
#include <iostream>
#include <time.h>

using std::cout;
using std::endl;

class Data
{
public:
	//constructor of Data
	Data();
	//deconstructor
	~Data();
	//Gives the random numbers, 1-5 and 3-8
	void RandomNumGen(int Express, int General);
	//setters
	void setCustomerNumber(int newCustomerNumber);
	void setServiceTime(int newServiceTime);
	void setTotalTime(int newTotalTime);
	//getters
	int getCustomerNumber() const;
	int getServiceTime() const;
	int getTotalTime() const;

private:
	//private members, the customer number, service time and total time
	int customerNumber;
	int serviceTime;
	int totalTime;
};