#pragma once
#include "Employee.h"

class Professional : public Employee {
public:
	Professional(string n, float r, int h, float i);
	float calculateWeeklySalary() const override;
	float computeHealthcareContributions() const override;
	double computeVacationDays() const override;
	void print() const override;
};

