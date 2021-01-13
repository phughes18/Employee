// CISC 2000   Fordham University  Fall 2019
// Instructor: Vincent Mierlak
// 
// Header file manager.h.
// This is the interface for the class Manager.
// Managers receive a monthly salary PLUS a bonus based on overall
// gross sales.

#ifndef _MANAGER_H_
#define _MANAGER_H_

#include <string>
#include "corpemployee.h"
using std::string;

class Manager : public CorporateEmployee
{
    public:
        Manager() : CorporateEmployee() { }
        Manager(string e_name, string e_ssn, double e_sal, double e_bonus);

        ~Manager() { }

        virtual double get_total_pay() const;

        double get_bonus() const;
        void set_bonus(double new_bonus);

    private:
        double bonus = 0.0;
};

#endif //_MANAGER_H_
