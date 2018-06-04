//
//  class.hpp
//  Assignment02_2
//
//  Created by Jeanne Mystery on 2018/4/11.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#ifndef class_hpp
#define class_hpp

#include <iostream>
#include <string>
using namespace std;

class Student{
private:
    string Student_Name;
    string Father_Name;
    long int Telephone_Num;
public:
    Student();
    ~Student();
    void setter_SN( string a );
    void setter_FN( string b );
    void setter_TN( long int c );
    string getter_SN();
    string getter_FN();
    long int getter_TN();
};

class Teacher{
private:
    int ID;
    char *Name;
    string Subject;
public:
    Teacher();
    ~Teacher();
    Teacher( Teacher *t );
    Teacher ( int I , char *N, string S);
    void setter_ID( int I );
    void setter_Name( char *N );
    void setter_Subject( string S );
    int getter_ID();
    char * getter_Name();
    string getter_Subject();
    
};

#endif /* class_hpp */
