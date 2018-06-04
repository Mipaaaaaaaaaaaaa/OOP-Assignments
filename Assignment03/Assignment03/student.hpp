//
//  student.hpp
//  Assignment03
//
//  Created by Jeanne Mystery on 2018/5/5.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#ifndef student_hpp
#define student_hpp
#include "student.hpp"
#include <iostream>
#include <strings.h>
#include <stdio.h>
#include "person.hpp"
using namespace std;


class Student:public Person{
private:
    string coursen;
    int roomno;
    float GPA;
public:
    Student(int a,string b,int c,string d,int e,string f,int g,float h);
    Student();
    ~Student();
    void set_coursen( string a );
    void set_roomno( int b );
    void set_GPA( float c );
    string get_coursen();
    int get_roomno();
    float get_GPA();
    void showOutPut();
};


#endif /* student_hpp */
