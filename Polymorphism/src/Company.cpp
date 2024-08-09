#include"Company.h"

void Company::input() {
    int selection = 0;
    do {
        cout << "------------MENU-------------" << endl;
        cout << "1. Office employee" << endl;
        cout << "2. Production employee" << endl;
        cout << "3. Management employee" << endl;
        cout << "4. Exit and Print" << endl;
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
        if(selection != 4) {
            employee->input();
            vect.push_back(employee);
        }
        cout << endl;
    }
    while(selection != 4);
}

void Company::output() {
    cout << "------------------OUTPUT-----------------" << endl;
    for(auto i : vect) {
        i->output();
        cout << endl;
    }
}