#include"Management_Employee.h"
#include"Office_Employee.h"
#include"Production_Employee.h"
#include<vector>
class Company {
private:
    vector<Employee *> vect;
public:
    void input();
    void output();
    float sumOfSalary();
    void findNameOfEmployee(string name);
};