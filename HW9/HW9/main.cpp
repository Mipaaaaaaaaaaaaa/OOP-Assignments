//
//  main.cpp
//  HW9
//
//  Created by Jeanne Mystery on 2018/3/29.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#include <iostream>
using namespace std;

class LinearEquation{
private:
    double a,b,c,d,e,f;
public:
    LinearEquation(){
        a = b = c = d = e = f = 0;
    };
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
    LinearEquation t;
    double a[6];
    cout << "Input a:";
    cin >> a[0];
    cout << "Input b:";
    cin >> a[1];
    cout << "Input c:";
    cin >> a[2];
    cout << "Input d:";
    cin >> a[3];
    cout << "Input e:";
    cin >> a[4];
    cout << "Input f:";
    cin >> a[5];
    
    t = LinearEquation(a[0],a[1],a[2],a[3],a[4],a[5]);
    if( t.isSolvable() )
        cout << "X = " << t.getX() << "\nY = " << t.getY() <<  endl;
    else
        cout << "The equation has no solution." << endl;
    return 0;
}
