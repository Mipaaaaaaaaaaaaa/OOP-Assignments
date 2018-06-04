//
//  person.hpp
//  Assignment03
//
//  Created by Jeanne Mystery on 2018/5/5.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#ifndef person_hpp
#define person_hpp
#include <string.h>
#include <iostream>
#include <stdio.h>
using namespace std;
class Person{
private:
    int id;
    string name;
    int age;
    string address;
    int phoneno;
public:
    Person(int a,string b,int c,string d,int e);
    Person();
    ~Person();
    
    void set_id( int a );
    void set_name( string b );
    void set_age( int c );
    void set_address( string d );
    void set_phoneno( int e );
    
    int get_id();
    string get_name();
    int get_age();
    string get_address();
    int get_phoneno();
    void showOutPut();
};

#endif /* person_hpp */
