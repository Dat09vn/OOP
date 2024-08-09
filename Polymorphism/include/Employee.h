#pragma once
#include<iostream>
#include<limits>
using namespace std;

class Employee {
protected:
    string name;
    string date;
    float base_salary;
    float gross_salary;

public:
    Employee();
    virtual void input();
    virtual void output();
    virtual float calculate();
};