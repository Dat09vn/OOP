#include"Office_Employee.h"

void Office_Employee::input() {
    Employee::input();
    cout << "Enter working days :";
    cin >> working_days;
    cout << "Enter allowance :";
    cin >> allowance;
}

void Office_Employee::output() {
    Employee::output();
    cout << "The working_days of Office Employee :" << working_days << endl;
    cout << "The allowance of Office Employee :" << allowance << endl;
    cout << "The calculate salary of Office Employee = " << Office_Employee::calculate() << endl;
}

float Office_Employee::calculate() {
    gross_salary = base_salary + working_days*100000 + allowance;
    return gross_salary;
}