// CISC 2000   Fordham University  Fall 2019
// Instructor: Vincent Mierlak
// 
// Header file payrollmanager.h.
// 
// This is the interface for the class PayrollManager.

#ifndef _PAYROLLMANAGER_H_
#define _PAYROLLMANAGER_H_

#include <iostream>
#include <vector>
#include "employee.h"
#include "corpemployee.h"
#include "salesemployee.h"
#include "hourlyemployee.h"
#include "nonexemptemployee.h"
#include "manager.h"

class PayrollManager {
    public:
        PayrollManager();
        virtual ~PayrollManager();

        virtual void generate_payroll_report();

        double get_revenue() const { return revenue; }
        void set_revenue(double new_rev);
        void add(Employee *new_emp);
        void add(Employee *new_emp, double rev);
        
    private:
        std::vector<Employee*> staff;
        double revenue;
};

#endif // _PAYROLLMANAGER_H_
