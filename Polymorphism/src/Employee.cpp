#include"Employee.h"


Employee::Employee() {
    base_salary = 5000000;
    gross_salary = 5000000;
}
void Employee::input() {
    cout << "Enter name :";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    getline(cin, name);
    cout << "Enter date :";
    getline(cin, date);
}
void Employee::output() {
    cout << "The name of Employee :" << name << endl;
    cout << "The date of birth Employee :" << date << endl;
}

float Employee::calculate() {
    cout << "The calculate salary is :" << gross_salary << endl;
    return gross_salary;
}