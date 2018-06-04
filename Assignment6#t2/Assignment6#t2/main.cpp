//
//  main.cpp
//  Assignment6#t2
//
//  Created by Jeanne Mystery on 2018/6/3.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#include <iostream>
#include <string.h>
using namespace std;
template<class T>
class Marks{
private:

public:
    T Mid;
    T Final;
    T Assignments;
    
    Marks(T m, T f, T a){
        Mid = m;
        Final = f;
        Assignments = a;
    }
    Marks(){};
    ~Marks(){};
};

class Total{
private:
    string course;
public:
    Total(string name){
        course = name;
    };
    Total(){};
    ~Total(){};
    template<class T> void Total_marks(Marks<T> m){
        T result;
        result = m.Mid + m.Final + m.Assignments;
        cout << "Total marks in "<< course << " are " << result << endl;
    }
};

int main(int argc, const char * argv[]) {
    Marks<int>course1 = Marks<int>(40, 20, 5);
    Marks<float>course2 = Marks<float>(40, 20, 6.5);
    Total oop = Total("OOP");
    Total db = Total("DB");
    oop.Total_marks(course1);
    db.Total_marks(course2);
    return 0;
}
