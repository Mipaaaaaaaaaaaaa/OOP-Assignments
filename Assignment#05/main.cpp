//
//  main.cpp
//  Assignment#05
//
//  Created by Jeanne Mystery on 2018/6/3.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
using namespace std;

class DInteger{
private:
    int one, two;
public:
    DInteger(){};
    ~DInteger(){};
    DInteger operator = (const DInteger &d ){
        if( this == &d )
            return *this;
        this->one = d.one;
        this->two = d.two;
        return *this;
    }
    
    DInteger operator + (const DInteger &d ){
        DInteger a;
        a.one = this->one + d.one;
        a.two = this->two + d.two;
        return a;
    }
    DInteger operator - (const DInteger &d ){
        DInteger a;
        a.one = this->one - d.one;
        a.two = this->two - d.two;
        return a;
    }
    DInteger operator * (const DInteger &d ){
        DInteger a;
        a.one = this->one * d.one;
        a.two = this->two * d.two;
        return a;
    }
    DInteger operator / (const DInteger &d ){
        DInteger a;
        a.one = this->one / d.one;
        a.two = this->two / d.two;
        return a;
    }
    
    DInteger & operator += (const int num){
        one = one + num;
        two = two + num;
        return *this;
    }
    
    DInteger & operator -= (const int num){
        one = one - num;
        two = two - num;
        return *this;
    }
    
    friend ostream & operator << (ostream& os ,const DInteger &d){
        os << "one is:" << d.one;
        os << "two is:" << d.two;
        return os;
    }
    
    friend istream & operator >> (istream& in, DInteger &d){
        cout << "one:";
        in >> d.one;
        cout << "two:";
        in >> d.two;
        return in;
    }
    
    DInteger operator++(int){
        DInteger temp = *this;
        one++;
        two++;
        return temp;
    }
};

int main(){
    
    DInteger a, b, sum, mul, div, sub; //DInteger is a class, it is not simple int
    
    cin >> a; // implement it
    cin >> b; // implement it
    
    sum = a + b;  // implement it
    mul = a * b;  // implement it
    div = a / b;  // implement it
    sub = a - b;  // implement it
    a += 10;  // implement it
    a -= 10;  // implement it
    a++;      // implement it
    
    cout<<sum<<endl; // implement it
    cout<<mul<<endl; // implement it
    cout<<div<<endl; // implement it
    cout<<sub<<endl; // implement it
    
    cout<<endl;
    return 0;
}
