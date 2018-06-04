//
//  main.cpp
//  Assignment6#t1
//
//  Created by Jeanne Mystery on 2018/6/3.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#include <iostream>
using namespace std;

template<class Temp>
class Circle{
private:
    Temp radius;
public:
    Circle(){};
    ~Circle(){};
    Temp getr(){
        return radius;
    }
    void setr(Temp r){
        radius = r;
    }
    float Area(){
        float Area = 3.1415*radius*radius;
        return Area;
    }
    void input(){
        Temp r;
        cout << "                radius:";
        cin >> r;
        setr(r);
    }
    void display(){
        cout << "Radius of the Circle is:" << radius << endl;
        cout << "Area of the Circle is:" << Area() << endl;
    }
};

int main(int argc, const char * argv[]) {
    Circle<int>r1;
    Circle<float>r2;
    Circle<double>r3;

    cout << "Enter the radius of first Circle:" << endl;
    r1.input();
    r1.display();
    cout << "        __________________________________" << endl;
    cout << "Enter the radius of first Circle:" << endl;
    r2.input();
    r2.display();
    cout << "        __________________________________" << endl;
    cout << "Enter the radius of first Circle:" << endl;
    r2.input();
    r2.display();
    return 0;
}
