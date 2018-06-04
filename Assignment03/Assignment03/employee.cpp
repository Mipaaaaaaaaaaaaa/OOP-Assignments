//
//  employee.cpp
//  Assignment03
//
//  Created by Jeanne Mystery on 2018/5/5.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#include "employee.hpp"
#include "person.hpp"
#include <iostream>
#include <strings.h>
using namespace std;


Employee::Employee(int a,string b,int c,string d,int e,string f,float g,float h){
        set_id(a);
        set_name(b);
        set_age(c);
        set_address(d);
        set_phoneno(e);
        deptn = f;
        grosssly = g;
        tax = h;
        netsly = (float)((100-tax)/100)*grosssly;
    }
    Employee::Employee(){};
    Employee::~Employee(){};
    string Employee::get_deptn(){
        return deptn;
    }
    float Employee::get_grosssly(){
        return grosssly;
    }
    float Employee::get_tax(){
        return tax;
    }
    float Employee::get_netsly(){
        return netsly;
    }
    void Employee::set_deptn( string a ){
        deptn = a;
    }
    void Employee::set_grosssly( float b ){
        grosssly = b;
    }
    void Employee::set_tax( float c ){
        tax = c;
    }
    void Employee::set_netsly( float d ){
        netsly = d;
    }
    void Employee::showOutPut(){
        
        cout << "\t\t*-*-*-*-*-*-*-*-*-*\n" <<
        "\t\t\tEmployee's Data\n" <<
        "\t\t*-*-*-*-*-*-*-*-*-*" << endl;
        
        cout << "Emoloyee Id:" << get_id() << "\n" <<
        "Employee Name:" << get_name() << "\n" <<
        "Employee Age:" << get_age() << "\n" <<
        "Employee Address:" << get_address() << "\n" <<
        "Employee Phone Number:" << get_phoneno() << "\n" <<
        "Employee Department:" << get_phoneno() << "\n" <<
        "Employee's Gross Salary:" << get_grosssly() << "with " << get_tax() << "% of Tax\n" <<
        "Employee's Net Salary:" << get_netsly() << "\n" << endl;
    }
