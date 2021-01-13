// CISC 2000   Fordham University  Fall 2019
// Instructor: Vincent Mierlak
// 
// This is the implementation for the class SalesEmployee.

#include <string>
#include <iostream>
#include "salesemployee.h"
using std::string;

SalesEmployee::SalesEmployee(string e_name, string e_ssn, 
        double e_sal, 
        double e_comm) : CorporateEmployee(e_name, e_ssn, e_sal)
{ 
    commission = e_comm;
}

double SalesEmployee::get_commission() const
{
    return commission;
}

void SalesEmployee::set_commission(double new_commish)
{
    commission = new_commish;
}

void SalesEmployee::set_monthly_sales(double mo_sales)
{
    monthly_sales = mo_sales;
}

double SalesEmployee::get_total_pay() const
{
    return salary + monthly_sales * commission;
}
