#include "employee.h"

/**
    @param string new_name: The name of the employee to be retrieved for display.
*/
Employee::Employee(std::string new_name) {
    name = new_name;
}


std::string Employee::getName() {
    return name;
}
