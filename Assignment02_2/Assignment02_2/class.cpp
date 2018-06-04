//
//  class.cpp
//  Assignment02_2
//
//  Created by Jeanne Mystery on 2018/4/11.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#include "class.hpp"


    Student::Student(){};
    void Student::setter_SN( string a ){
        Student_Name = a;
    }
    Student::~Student(){};
    void Student::setter_FN( string b ){
        Father_Name = b;
    }
    void Student::setter_TN( long int c ){
        Telephone_Num = c;
    }
    string Student::getter_SN(){
        return Student_Name;
    }
    string Student::getter_FN(){
        return Father_Name;
    }
    long int Student::getter_TN(){
        return Telephone_Num;
    }
    

    Teacher::Teacher(){
        
    }
    Teacher::Teacher( Teacher *t ){
        Name = t->getter_Name();
        Subject = t->getter_Subject();
    }
    Teacher::Teacher ( int I , char *N, string S){
        ID = I;
        Name = N;
        Subject = S;
    }
    Teacher::~Teacher(){
    
    }
    void Teacher::setter_ID( int I ){
        ID = I;
    }
    void Teacher::setter_Name( char *N ){
        Name = N;
    }
    void Teacher::setter_Subject( string S ){
        Subject = S;
    }
    int Teacher::getter_ID(){
        return ID;
    }
    char * Teacher::getter_Name(){
        return Name;
    }
    string Teacher::getter_Subject(){
        return Subject;
    }
