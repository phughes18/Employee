// CISC 2000   Fordham University  Fall 2019
// Instructor: Vincent Mierlak
// Implementation file for PayrollManager class.
#include <iostream>
#include <iomanip>
#include <locale>
#include "payrollmanager.h"

PayrollManager::PayrollManager()
{
    revenue = 0.0;
}

void PayrollManager::set_revenue(double new_rev)
{
    revenue = new_rev;
}

void PayrollManager::add(Employee *new_emp)
{
    staff.push_back(new_emp);
}

void PayrollManager::add(Employee *new_emp, double rev)
{
    staff.push_back(new_emp);
    revenue += rev;
}

void PayrollManager::generate_payroll_report()
{
    using std::cout;
    using std::endl;
    for (auto emp: staff)
    {
        cout << std::setw(30) << std::left << emp->to_string() 
             << " Total pay: $" << std::setw(10) << std::right 
             << emp->get_total_pay() << endl;
    }

}

PayrollManager::~PayrollManager()
{
    for (auto emp: staff)
        delete emp;
}
