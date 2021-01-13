// CISC 2000   Fordham University  Fall 2019
// Instructor: Vincent Mierlak
// 
// This is the implementation for the class CorporateEmployee.

#include <string>
#include <iostream>
#include "corpemployee.h"
using std::string;

CorporateEmployee::CorporateEmployee(string e_name, string e_ssn,
        double e_sal) : Employee(e_name, e_ssn)
{ 
    salary = e_sal;
}

double CorporateEmployee::get_total_pay() const
{
    return salary;
}

double CorporateEmployee::get_salary() const
{
    return salary;
}

void CorporateEmployee::set_salary(double new_sal)
{
    salary = new_sal;
}


