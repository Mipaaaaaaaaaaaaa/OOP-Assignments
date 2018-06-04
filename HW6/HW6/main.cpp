//
//  main.cpp
//  HW6
//
//  Created by Jeanne Mystery on 2018/3/28.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

class QuadraticEquation{
private:
    double a,b,c;
    
public:
    QuadraticEquation(){
        a = 0;
        b = 0;
        c = 0;
    }
    QuadraticEquation( double n1 , double n2 , double n3 ){
        a = n1;
        b = n2;
        c = n3;
    }
    
    double getter_a(){
        return a;
    }
    double getter_b(){
        return b;
    }
    double getter_c(){
        return c;
    }
    double getDiscriminant(){
        return b*b-4*a*c;
    }
    double getRoot1(){
        if( getDiscriminant() >=0 )
            return (-b+sqrt(getDiscriminant()))/2;
        else
            return 0;
    }
    double getRoot2(){
        if( getDiscriminant() >=0 )
            return (-b-sqrt(getDiscriminant()))/2;
        else
            return 0;
    }
};

int main(int argc, const char * argv[]) {
    QuadraticEquation test;
    double a,b,c;
    cout << "Input a:" ;
    cin >> a ;
    cout << "Input b:" ;
    cin >> b ;
    cout << "Input c:" ;
    cin >> c ;
    test = QuadraticEquation(a,b,c);
    if(test.getDiscriminant()>=0)
        cout << "Root1: " << test.getRoot1() << "\n" << "Root2: " << test.getRoot2() << endl;
    else
        cout << "The equation has no real roots." << endl;
    
    return 0;
}
