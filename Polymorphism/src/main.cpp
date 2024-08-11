#include"Company.h"

int main() {
    Company company;
    company.input();
    company.output();
    cout << "Sum of salary of the Company = " << company.sumOfSalary() << endl;
    return 0;
}