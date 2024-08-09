#include"Management_Employee.h"

void Management_Employee::input() {
    Employee::input();
    cout << "Enter coefficient :";
    cin >> coefficient;
    cout << "Enter bonus :";
    cin >> bonus;
}

void Management_Employee::output() {
    Employee::output();
    cout << "The coefficient of Management Employee :" << coefficient << endl;
    cout << "The bonus of Management Employee :" << bonus << endl;
    cout << "The calculate salary of Management Employee = " << Management_Employee::calculate() << endl;
}

float Management_Employee::calculate() {
    gross_salary = base_salary*coefficient + bonus;
    return gross_salary;
}