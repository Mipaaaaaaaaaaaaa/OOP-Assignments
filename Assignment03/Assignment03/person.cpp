//
//  person.cpp
//  Assignment03
//
//  Created by Jeanne Mystery on 2018/5/5.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#include "person.hpp"
#include <string.h>
#include <iostream>
using namespace std;


Person::Person(int a,string b,int c,string d,int e){
        id = a;
        name = b;
        age = c;
        address = d;
        phoneno = e;
    }

Person::Person(){};
Person::~Person(){};
    void Person::set_id( int a ){
        id = a;
    }
    void Person::set_name( string b ){
        name = b;
    }
    void Person::set_age( int c ){
        age = c;
    }
    void Person::set_address( string d ){
        address = d;
    }
    void Person::set_phoneno( int e ){
        phoneno = e;
    }
    
    int Person::get_id(){
        return id;
    }
    string Person::get_name(){
        return name;
    }
    int Person::get_age(){
        return age;
    }
    string Person::get_address(){
        return address;
    }
    int Person::get_phoneno(){
        return phoneno;
    }
    void Person::showOutPut(){
        cout << "Person Id:\t\t" << id << "\n" <<
        "Person Name:\t\t" << name << "\n" <<
        "Person Age:\t\t" << age << "\n" <<
        "Person Address:\t\t" << address << "\n" <<
        "Person Phone Number:\t" << phoneno << endl;
    }
