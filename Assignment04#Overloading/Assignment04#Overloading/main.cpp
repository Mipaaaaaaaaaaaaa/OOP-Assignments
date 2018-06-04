//
//  main.cpp
//  Assignment04#Overloading
//
//  Created by Jeanne Mystery on 2018/5/17.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#include <iostream>
using namespace std;

class  FeetInches{
private:
    int feet;
    int inches;
    void calculate(){
        feet += inches/12;
        inches = inches%12;
    }
public:
    
    FeetInches(){};
    ~FeetInches(){};
    
    void setFeet( int c ){
        feet = c;
    }
    void setinches( int c ){
        inches = c;
        calculate();
    }
    
    int getFeet(){
        return feet;
    }
    int getinches(){
        return inches;
    }
    
    FeetInches operator+(const FeetInches &c){
        class FeetInches f;
        f.feet = this->feet + c.feet;
        f.inches = this->inches + c.inches;
        f.calculate();
        return f;
    }
    
    FeetInches operator*(const FeetInches &c){
        FeetInches f;
        f.feet = this->feet * c.feet;
        f.inches = this->inches * c.inches;
        f.calculate();
        return f;
    }
    
    bool operator>=(const FeetInches &c){
        int i1,i2;
        i1 = this->feet * 12 + this->inches;
        i2 = c.feet * 12 + c.inches;
        if ( i1 >= i2 )
            return 1;
        else return 0;
    }
    
    
    bool operator!=(const FeetInches &c){
        if( this->feet == c.feet && this->inches == c.inches )
            return 0;
        else return 1;
    }
    
    FeetInches operator/(const FeetInches &c){
        FeetInches f;
        int i1,i2;
        i1 = this->feet * 12 + this->inches;
        i2 = c.feet * 12 + c.inches;
        f.inches = i2/i1;
        f.calculate();
        return f;
    }
    void Display(){
        cout << feet << " feet," << inches << " inches";
    }
};

int main(int argc, const char * argv[]) {
    FeetInches f1,f2,f3;
    int tempF,tempI;
    
    cout << "Enter a length in feet and inches:" << endl;
    cout << "Feet                 :" ;
    cin >> tempF;
    cout << "Inches             :";
    cin >> tempI;
    f1.setFeet(tempF);
    f1.setinches(tempI);
    cout << "Enter a length in feet and inches:" << endl;
    cout << "Feet                 :" ;
    cin >> tempF;
    cout << "Inches             :";
    cin >> tempI;
    f2.setFeet(tempF);
    f2.setinches(tempI);
    
    f1.Display();
    cout <<" sum ";
    f2.Display();
    cout << " is ";
    (f2+f1).Display();
    cout << endl;
    
    f1.Display();
    cout <<" times ";
    f2.Display();
    cout << " is ";
    (f2*f1).Display();
    cout << endl;
    
    
    f1.Display();
    if(f1>=f2)
    cout <<" is greater than and equal to ";
    else
    cout <<" is not greater than and equal to ";
    f2.Display();
    cout << endl;
    
    if( f1!=f2 )
        cout << "Two are not equal" << endl;
    else cout << "Two are equal" << endl;
    
    f1.Display();
    cout <<" divided ";
    f2.Display();
    cout << " is ";
    (f2/f1).Display();
    cout << endl;
    
    return 0;
}
