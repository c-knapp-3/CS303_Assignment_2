#include "Employee.h"
#include "Professional.h"
#include "NonProfessional.h"
#include <vector>

int main() {
	vector<Employee*> allEmployees;		   // create a vector of Employee type
	Professional* proEmployee = new Professional("Ryan", 78, 48, 0.83);  // create professional instance
	NonProfessional* nonProEmployee = new NonProfessional("Layla", 35, 32, 0.65);  // create nonprofessional instance

	allEmployees.push_back(proEmployee);	// add professional employee to the vector
	allEmployees.push_back(nonProEmployee); // add nonprofessional employee to the vector

	for (int i = 0; i < allEmployees.size(); i++) {
		allEmployees.at(i)->print();		// display employees
	}

	return 0;
}

