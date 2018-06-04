//
//  main.cpp
//  Assignment03_2
//
//  Created by Jeanne Mystery on 2018/5/5.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#include <iostream>
#include <string.h>
using namespace std;

class Discipline{
public:
    string name;
    int NumOfCourses;
    int CreditHours;

    int DegreeRequirement(){
        return NumOfCourses*CreditHours;
    }
    
    //member function for total number of credit hours required for degree.
    
    void Input(){
        cout << "Enter Discipline’s name:" ;
        getline(cin,name);
        getline(cin,name);
        cout << "Enter number of courses:" ;
        cin >> NumOfCourses;
        cout << "Enter credit hours per course:" ;
        cin >> CreditHours;
    };
    
    void Display(){
        cout << "Degree:" << name << "\n" <<
        "Number of required courses:" << NumOfCourses << "\n" <<
        "Number of credit hours:" << CreditHours << endl;
    }
};

class Graduation:public Discipline{
public:
    const int Thesis_Credit = 4;

    int DegreeRequirement(){
        return (NumOfCourses*CreditHours)+Thesis_Credit;
    };
    //This method will calculate the total number of credit hours for the respective discipline. This can be done by multiplying the CreditHours by NumOfCourses and adding the Thesis_Credit.
    void Input(){
        Discipline::Input();
    }
    void Display(){
        Discipline::Display();
        cout <<"Thesis credit:" << Thesis_Credit << "\n" <<
        "Total number of required credit hours for graduation degree:" << DegreeRequirement() << endl;
    }
};

class PostGraduation:public Discipline{
public:
    char Thesis_Project;
    //for thesis or project. The Postgraduate student has choice whether to take Thesis or Project. The number of credit hours varies both incase of thesis and project.
    int Thesis_Project_Credit;
    //for numbers of credit hours; incase of thesis it should be 4, incase of Project it should be 6
    int DegreeRequirement(){
        if( Thesis_Project == 'p' )
            Thesis_Project_Credit = 6;
        else if( Thesis_Project == 't' )
            Thesis_Project_Credit = 4;
        return (NumOfCourses*CreditHours)+Thesis_Project_Credit;
    }
    //This method will calculate the total number of credit hours for the respective  discipline. This can be done by multiplying the CreditHours by NumOfCourses and adding the Thesis_Project_Credit.
    void Input(){
        Discipline::Input();
        cout << "Enter your choice for Thesis or Project;  T/t for thesis; P/p for project:" ;
        cin >> Thesis_Project;
    }
    void Display(){
        Discipline::Display();
        if( Thesis_Project == 'p')
            cout << "Project credit:" << Thesis_Project_Credit << endl;
        else if( Thesis_Project == 't' )
            cout << "Thesis credit:" << Thesis_Project_Credit << endl;
    cout << "Total number of required credit hours for graduation degree:" << DegreeRequirement() << endl;
    }
};

int main(int argc, const char * argv[]) {
    Graduation g;
    PostGraduation p;
    g.Input();
    g.Display();
    p.Input();
    p.Display();
    std::cout << "Hello, World!\n";
    return 0;
}
