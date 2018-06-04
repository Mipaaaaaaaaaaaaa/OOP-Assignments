//
//  Student.hpp
//  Assignment04#inherit
//
//  Created by Jeanne Mystery on 2018/5/22.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#ifndef Student_hpp

#define Student_hpp

#include <strings.h>

class Student{
private:
    string name;
    string address;
    int rollNo;
public:
    virtual void PrintInfo();
};

class BSStudent:protected Student{
private:
    int Year;
public:
    void PrintInfo();
};

class MSStudent:public Student{
private:
    string advisor;
public:
    void PrintInfo();
};

class MSByCourse:public MSStudent{
public:
    void PrintInfo();
};

class MSByResearch:public MSStudent{
private:
    int ThesisStatus;
public:
    void PrintInfo();
};

#endif /* Student_hpp */
