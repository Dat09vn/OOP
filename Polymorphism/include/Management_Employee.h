#include"Employee.h"

class Management_Employee : public Employee {
private:
    float coefficient;
    float bonus;
public:
    void input();
    void output();
    float calculate();
};