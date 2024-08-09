#include"Employee.h"

class Office_Employee : public Employee {
private:
    int working_days;
    int allowance;
public:
    void input();
    void output();
    float calculate();
};