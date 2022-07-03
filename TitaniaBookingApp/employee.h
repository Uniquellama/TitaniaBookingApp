#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee
{
private:
    std::string name;

public:

    Employee(std::string new_name);


    std::string getName();
};

#endif // EMPLOYEE_H
