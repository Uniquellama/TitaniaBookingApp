#include "employee.h"

/**
 * @brief Employee::Employee Object represents user intending to make a booking
 * @param new_name
 */
Employee::Employee(std::string new_name) {
    name = new_name;
}


std::string Employee::getName() {
    return name;
}
