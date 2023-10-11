#include "Professional.h"

Professional::Professional(string n, float r, int h, float i) : Employee(n, r, h, i) {
	this->hoursWorked = 40;
	this->vacation = 15;
}

float Professional::calculateWeeklySalary() const {
	return hoursWorked * rate;             // hours worked times hourly rate
}

float Professional::computeHealthcareContributions() const {
	return (rate * hoursWorked) * healthIns;    // hourly rate times 40 hours a week
}

double Professional::computeVacationDays() const {
	return (hoursWorked / static_cast<double>(2080)) * vacation;   // 40 hours times 52 wks (in a yr) - 15 days vacation annually
}

void Professional::print() const {
	cout << "Professional Employee Name: " << name << endl;
	cout << "-------------------------------------" << endl;
	cout << "Weekly salary: $" << calculateWeeklySalary() << endl;
	cout << "Healthcare contributions: $" << computeHealthcareContributions() << endl;
	cout << "Vacation days earned: " << fixed << setprecision(2) << computeVacationDays() << " days" << endl << endl;
}
