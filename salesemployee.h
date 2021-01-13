// CISC 2000   Fordham University  Fall 2019
// Instructor: Vincent Mierlak
// 
// Header file salesemployee.h.
// 
// This is the interface for the class SalesEmployee.
// SalesEmployees receive a monthly salary PLUS a commission based on
// their total monthly sales.

#ifndef _SALES_EMPLOYEE_H_
#define _SALES_EMPLOYEE_H_

#include <string>
#include "corpemployee.h"
using std::string;

class SalesEmployee: public CorporateEmployee
{
    public:
        SalesEmployee() : CorporateEmployee() { }
        SalesEmployee(string e_name, string e_ssn, double e_sal, double e_comm);
        
        virtual ~SalesEmployee() { }

        virtual double get_total_pay() const;

        double get_commission() const;
        double get_monthly_sales() const { return monthly_sales; }
        void set_commission(double new_commish);
        void set_monthly_sales(double mo_sales);

    private:
        double commission = 0.0;
        double monthly_sales;
};

#endif //_SALES_EMPLOYEE_H_
