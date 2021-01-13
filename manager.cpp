// CISC 2000   Fordham University  Fall 2019
// Instructor: Vincent Mierlak
// 
// This is the implementation for the class Manager.

#include <string>
#include <iostream>
#include "manager.h"
using std::string;

Manager::Manager(string e_name, string e_ssn, 
        double e_sal, double e_bonus) : CorporateEmployee(e_name, e_ssn, e_sal)
{
    bonus = e_bonus;
    salary = e_sal;
}

double Manager::get_total_pay() const
{
    return salary + bonus;
}

double Manager::get_bonus() const
{
    return bonus;
}

void Manager::set_bonus(double new_bonus)
{
    bonus = new_bonus;
}


