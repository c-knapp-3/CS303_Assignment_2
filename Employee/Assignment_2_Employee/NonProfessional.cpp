#include "NonProfessional.h"

NonProfessional::NonProfessional(string n, float r, int h, float i) : Employee(n, r, h, i) {}

float NonProfessional::calculateWeeklySalary() const {
	return hoursWorked * rate;
}

float NonProfessional::computeHealthcareContributions() const {
	return (rate * healthIns) * hoursWorked;   // contribution is rate * healthcare contribution * number of hours worked
}

double NonProfessional::computeVacationDays() const {
	return (hoursWorked / static_cast<double>(40));   // hoursWorked / 40 hours to get vacation time
}

void NonProfessional::print() const {
	cout << "NonProfessional Employee Name: " << name << endl;
	cout << "-------------------------------------" << endl;
	cout << "Weekly salary: $" << calculateWeeklySalary() << endl;
	cout << "Healthcare contributions: $" << computeHealthcareContributions() << endl;
	cout << "Vacation earned: " << fixed << setprecision(2) << computeVacationDays() << " days" << endl << endl;
}
