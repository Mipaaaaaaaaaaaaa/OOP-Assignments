//
//  main.cpp
//  HW10
//
//  Created by Jeanne Mystery on 2018/3/29.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#include <iostream>
using namespace std;

class Linear{
private:
    double x0,x1,y0,y1;
    double a,b,c;
public:
    Linear(){
        
    };
    Linear(double x,double y,double x_,double y_){
        x0 = x;
        y0 = y;
        x1 = x_;
        y1 = y_;
        a = y0 - y1;
        b = x1 - x0;
        c = y0 - ( y1 - y0 ) * x0;
    }
    double geta(){
        return a;
    }
    double getb(){
        return b;
    }
    double getc(){
        return c;
    }

};

class LinearEquation{
private:
    double a,b,c,d,e,f;
public:
    LinearEquation(){
        a = b = c = d = e = f = 0;
    }
    LinearEquation(double n1,double n2, double n3, double n4, double n5, double n6){
        a = n1;
        b = n2;
        c = n3;
        d = n4;
        e = n5;
        f = n6;
    }
    double geta(){
        return a;
    }
    double getb(){
        return b;
    }
    double getc(){
        return c;
    }
    double getd(){
        return d;
    }
    double gete(){
        return e;
    }
    double getf(){
        return f;
    }
    
    bool isSolvable(){
        if( a*d - b*c != 0 )
            return true;
        else return false;
    }
    double getX(){
        return (e*d-b*f)/(a*d-b*c);
    }
    double getY(){
        return (a*f-e*c)/(a*d-b*c);
    }

};

int main(int argc, const char * argv[]) {
    Linear a,b;
    LinearEquation test;
    double n[8];
    cout << "Input First Line x1:\t" ;
    cin >> n[0] ;
    cout << "Input First Line y1:\t" ;
    cin >> n[1] ;
    cout << "Input First Line x2:\t" ;
    cin >> n[2] ;
    cout << "Input First Line y2:\t" ;
    cin >> n[3] ;
    cout << "Input Second Line x1:\t" ;
    cin >> n[4] ;
    cout << "Input Second Line y1:\t" ;
    cin >> n[5] ;
    cout << "Input Second Line x2:\t" ;
    cin >> n[6] ;
    cout << "Input Second Line y2:\t" ;
    cin >> n[7] ;
    a = Linear(n[0], n[1], n[2], n[3]);
    b = Linear(n[4], n[5], n[6], n[7]);
    test = LinearEquation(a.geta(), a.getb(), a.getc(), b.geta(), b.getb(), b.getc());
    if(test.isSolvable())
        cout << "X = " << test.getX() << "\nY = " << test.getY() << endl;
    else
        cout << "The equation has no solution." << endl;
    return 0;
}
