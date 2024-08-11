#include"Employee.h"

class Production_Employee : public Employee {
private:
    int number_of_product;
public:
    void input();
    void output();
    float calculate();
};