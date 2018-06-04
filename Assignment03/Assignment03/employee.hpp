//
//  employee.hpp
//  Assignment03
//
//  Created by Jeanne Mystery on 2018/5/5.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#ifndef employee_hpp
#define employee_hpp

#include <stdio.h>
#include <iostream>
#include <strings.h>
#include "person.hpp"
using namespace std;

class Employee:public Person{
private:
    string deptn;
    float grosssly;
    float tax;
    float netsly;
public:
    Employee(int a,string b,int c,string d,int e,string f,float g,float h);
    Employee();
    ~Employee();
    string get_deptn();
    float get_grosssly();
    float get_tax();
    float get_netsly();
    void set_deptn( string a );
    void set_grosssly( float b );
    void set_tax( float c );
    void set_netsly( float d );
    void showOutPut();
};
#endif /* employee_hpp */
