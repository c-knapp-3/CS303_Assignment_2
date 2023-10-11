#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

class Employee {
protected:
	string name;
	float rate;
	int hoursWorked;
	float healthIns;
	float vacation;
public:
	Employee();
	Employee(string n, float r, int h, float i);
	virtual float calculateWeeklySalary() const = 0;
	virtual float computeHealthcareContributions() const = 0;
	virtual double computeVacationDays() const = 0;
	virtual void print() const = 0;
};







#pragma once
