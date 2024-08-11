#include"Company.h"

void Company::input() {
    int selection = 0;
    do {
        cout << "------------MENU-------------" << endl;
        cout << "1. Office employee" << endl;
        cout << "2. Production employee" << endl;
        cout << "3. Management employee" << endl;
        cout << "4. Find name of employee" << endl;
        cout << "5. Exit and Print" << endl;
        cout << "Please, Enter your selection :";
        cin >> selection;
        cout << endl;
        Employee *employee;
        if(selection == 1) {
            cout << "Enter Office employee :" << endl;
            employee = new Office_Employee();
        }
        else if(selection == 2) {
            cout << "Enter Production employee :" << endl;
            employee = new Production_Employee();
        }
        else if(selection == 3) {
            cout << "Enter Management employee :" << endl;
            employee = new Management_Employee();
        }
        else if(selection == 4) {
            string name;
            cout << "Enter the name to find :";
            cin >> name;
            findNameOfEmployee(name);
        }
        if(selection != 4 && selection != 5) {
            employee->input();
            vect.push_back(employee);
        }
        cout << endl;
    }
    while(selection != 5);

}

void Company::output() {
    cout << "------------------OUTPUT-----------------" << endl;
    for(auto i : vect) {
        i->output();
        cout << endl;
    }
}

float Company::sumOfSalary() {
    float sum = 0;
    for(auto i : vect) {
        sum += i->calculate();
    }
    return sum;
}

void Company::findNameOfEmployee(string name) {
    bool findName = false;
    for(auto i : vect) {
        if(i->getName() == name) {
            findName = true;
            i->output();
        }
    }
    if(findName == false) {
        cout << "Can not find name with :" << name << endl;
    }
}