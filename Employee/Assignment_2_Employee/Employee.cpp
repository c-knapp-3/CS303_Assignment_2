#include "Employee.h"

Employee::Employee() {
	name = "unknown";
	rate = 0;
	hoursWorked = 0;
	healthIns = 0;
	vacation = 0;
}

Employee::Employee(string n, float r, int h, float i) {
	this->name = n;
	this->rate = r;
	this->hoursWorked = h;
	this->healthIns = i;
}