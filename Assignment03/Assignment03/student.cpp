//
//  student.cpp
//  Assignment03
//
//  Created by Jeanne Mystery on 2018/5/5.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#include "student.hpp"
#include <iostream>
#include <strings.h>
#include "person.hpp"
using namespace std;

Student::Student(int a,string b,int c,string d,int e,string f,int g,float h){
        set_id(a);
        set_name(b);
        set_age(c);
        set_address(d);
        set_phoneno(e);
        coursen = f;
        roomno = g;
        GPA = h;
    }
    Student::Student(){};
    Student::~Student(){};
    void Student::set_coursen( string a ){
        coursen = a;
    }
    void Student::set_roomno( int b ){
        roomno = b;
    }
    void Student::set_GPA( float c ){
        GPA = c;
    }
    string Student::get_coursen(){
        return coursen;
    }
    int Student::get_roomno(){
        return roomno;
    }
    float Student::get_GPA(){
        return GPA;
    }
    void Student::showOutPut(){
        
        cout << "\t\t*-*-*-*-*-*-*-*-*-*\n" <<
        "\t\t\tStudent's Data\n" <<
        "\t\t*-*-*-*-*-*-*-*-*-*" << endl;
        
        cout << "Student Id:" << get_id() << "\n" <<
        "Studen Name:" << get_name() << "\n" <<
        "Student Age:" << get_age() << "\n" <<
        "Student Address:" << get_address() << "\n" <<
        "Student Phone Number:" << get_phoneno() << "\n" <<
        "Student Course Discipline [CS/IT]:" << get_coursen() << "\n" <<
        "Student's Room No:" << get_roomno() << "\n" <<
        "Student's GPA:" << get_GPA() << "\n" << endl;
    }
