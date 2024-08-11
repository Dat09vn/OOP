#include"Production_Employee.h"

void Production_Employee::input() {
    Employee::input();
    cout << "Enter number of product :";
    cin >> number_of_product;
}

void Production_Employee::output() {
    Employee::output();
    cout << "The number of product of Production Employee:" << number_of_product << endl;
    cout << "The calculate salary of Production Employee = " << Production_Employee::calculate() << endl;
}

float Production_Employee::calculate() {
    gross_salary = base_salary + number_of_product*2000;
    return gross_salary;
}