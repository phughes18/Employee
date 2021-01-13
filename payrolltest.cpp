// CISC 2000  Fordham University  Fall 2019
// Instructor: Vincent Mierlak
//
// Lab 10.  Implement a PayrollManager class.
//
#include <iostream>
#include "payrollmanager.h"

using std::cout;
using std::endl;

int main()
{
    PayrollManager nycdiv;

    nycdiv.add(new HourlyEmployee("Adam Driven", "444559999", 21.50, 160));
    nycdiv.add(new HourlyEmployee("Minnie Castile", "555993322", 23.25, 150));

    SalesEmployee *sales_emp = nullptr;

    sales_emp = new SalesEmployee("Sidney Lumint", "000441199", 2500.00, 0.1);
    sales_emp->set_monthly_sales(100000);
    nycdiv.add(sales_emp, 100000);

    sales_emp = new SalesEmployee("Edna Millanon", "111221199", 2500.00, 0.1);
    sales_emp->set_monthly_sales(150000);
    nycdiv.add(sales_emp, 150000);

    sales_emp = new SalesEmployee("Henri Frinch", "777334444", 3000.00, 0.075);
    sales_emp->set_monthly_sales(75000);
    nycdiv.add(sales_emp, 75000);

    sales_emp = new SalesEmployee("Maisie Krill", "888990033", 2750.00, 0.075);
    sales_emp->set_monthly_sales(200000);
    nycdiv.add(sales_emp, 200000);

    double total_rev = nycdiv.get_revenue();
    Manager* mgr = new Manager("Estelle Parsnip", "434558833", 7600, 
                                total_rev * .015);
    nycdiv.add(mgr);

    nycdiv.add(new NonexemptEmployee("John Doe", "001551234", 18.60, 46));
    nycdiv.add(new NonexemptEmployee("Eleanor Riggidy", "919884321", 
                                      25.75, 40));

    cout.setf(std::ios::fixed);
    cout.setf(std::ios::showpoint);
    cout.precision(2);
    cout.imbue(std::locale(""));
    cout << "NYC Division -- Payroll Test:" << endl;

    // One function call: generate the payroll report
    nycdiv.generate_payroll_report();

    return 0;
}
