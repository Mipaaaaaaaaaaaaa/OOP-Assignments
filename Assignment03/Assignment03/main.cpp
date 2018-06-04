//
//  main.cpp
//  Assignment03
//
//  Created by Jeanne Mystery on 2018/5/5.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#include <iostream>
#include <strings.h>
#include "employee.hpp"
#include "student.hpp"
using namespace std;


int main(int argc, const char * argv[]) {
    Student s;
    Employee p;
    
    int a;
    string b;
    int c;
    string d;
    int e;
    string f;
    int g;
    float h;
    float i;

    
    cout << "\t\t*-*-*-**-*-*-*-*-*-*-*-*-*\n" <<
    "\t\tEnter Student's Information\n" <<
    "\t\t*-*-*-**-*-*-*-*-*-*-*-*-*" << endl;
    
    cout << "Enter the Roll No:"  ;
    cin >> a;
    cout << "Enter the Name of the Person:";
    cin >> b;
    cout << "Enter the Age of the Person:";
    cin >> c;
    cout << "Enter the Address of the Person:";
    cin >> d;
    cout << "Enter the Phone No of the Person:" ;
    cin >> e;
    cout << "Enter the Course Discipline of the Person [CS/IT]:";
    cin >> f;
    cout << "Enter the Room No of the Person:";
    cin >> g;
    cout << "Enter the GPA of the Person:";
    cin >> h;
        cout << "\n";
    s = Student(a, b, c, d, e, f, g, h);
    s.showOutPut();
        cout << "\n";
    
    cout << "\t*-*-*-**-*-*-*-*-*-*-*-*-*\n" <<
    "\t\tEnter Employee's Information\n" <<
    "\t*-*-*-**-*-*-*-*-*-*-*-*-*" << endl;
    
    cout << "Enter the Employee Id:" ;
    cin >> a;
    cout << "Enter the Name of the Person:";
    cin >> b;
    cout << "Enter the Age of the Person:";
    cin >> c;
    cout <<"Enter the Address of the Person:";
    cin >> d;
    cout << "Enter the Phone No of the Person:";
    cin >> e;
    cout << "Enter the Department of the Person:";
    cin >> f;
    cout << "Enter the Gross Salary of the Person:";
    cin >> h;
    cout << "Enter the Tax Percentage of the Person:";
    cin >> i;
    cout << "\n";
    
    p = Employee(a, b, c, d, e, f, h, i);
    p.showOutPut();
        cout << "\n";
    return 0;
}
