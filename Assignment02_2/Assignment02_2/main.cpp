//
//  main.cpp
//  Assignment02_2
//
//  Created by Jeanne Mystery on 2018/4/11.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#include <iostream>
#include <string>
#include "class.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    string TempS,TempF,blink;
    long int TempT;
    int Num;
    Student *Stu;
    
    Teacher t1;
    t1 = Teacher(2015311,"Wang Fei","Computer science");
    Teacher t2 = Teacher(t1);
    Teacher t3(2015312,"Zhang TianYi","Computer science");
    t2 = t3;
    
    cout << "Teacher Id         :" << t1.getter_ID() << "\n" <<
    "Teacher Name       :" << t1.getter_Name() << "\n" <<
    "Subject Name       :" << t1.getter_Subject() << "\n" <<
    "Teacher Id         :" << t2.getter_ID() << "\n" <<
    "Teacher Name       :" << t2.getter_Name() << "\n" <<
    "Subject Name       :" << t2.getter_Subject() << "\n" << endl;
    
    cout << "Enter the number of records you want to enter   :";
    cin >> Num;
    Stu = new Student[Num];
    for( int i = 0 ; i < Num ; i++ ){
    cout << "Enter the Father’s Name                         :" ;
        getline(cin,blink);
        getline(cin,TempF);
        cout << "Enter the Student Name                          :" ;
        getline(cin,blink);
        getline(cin,TempF);
    cout << "Enter the Telephone Number                  :"  ;
    cin >> TempT;
        Stu[i].setter_SN(TempS);
        Stu[i].setter_FN(TempF);
        Stu[i].setter_TN(TempT);
    }
    for( int i = 0 ; i < Num ; i++ ){
        cout << "Student Name                          :" << Stu[i].getter_SN() << "\n"
        << "Father’s Name                         :" << Stu[i].getter_FN() << "\n"
        << "Telephone Number                  :" << Stu[i].getter_TN() << endl;
    }
    cout << "Hello, World!\n";
    return 0;
    

}
