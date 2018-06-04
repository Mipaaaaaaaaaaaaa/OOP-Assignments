//
//  main.cpp
//  Assignment04#OverloadingOPerators
//
//  Created by Jeanne Mystery on 2018/5/22.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#include <iostream>
using namespace std;
class Vector{
private:
    double XComponent;
    double YComponent;
    double ZComponent;
public:
    void setX( double X ){
        XComponent = X;
    }
    void setY( double Y ){
        YComponent = Y;
    }
    void setZ( double Z ){
        ZComponent = Z;
    }
    double getX( ){
        return XComponent;
    }
    double getY(){
        return YComponent;
    }
    double getZ(){
        return ZComponent;
    }
    Vector(){};
    ~Vector(){};
    Vector operator+(const Vector v){
        Vector ne;
        ne.XComponent = this->XComponent + v.XComponent;
        ne.YComponent = this->YComponent + v.YComponent;
        ne.ZComponent = this->ZComponent + v.ZComponent;
        return ne;
    }
    double operator*(const Vector v){
        Vector ne;
        ne.XComponent = this->XComponent * v.XComponent;
        ne.YComponent = this->YComponent * v.YComponent;
        ne.ZComponent = this->ZComponent * v.ZComponent;
        return ne.XComponent+ne.YComponent+ne.ZComponent;
    }
    void Display(){
        if(YComponent > 0)
        cout << XComponent << " i + ";
        else
        cout << XComponent << " i ";
        if(ZComponent > 0)
        cout << YComponent << " j + " << ZComponent << " k " << endl;
        else
        cout << YComponent << " j " << ZComponent << " k " << endl;
    }
};


int main(int argc, const char * argv[]) {
    Vector v1,v2,v3;
    double tempX,tempY,tempZ;
    cout << "Enter the components for vector 1:" << endl;
    cout <<  "X component:" ;
    cin >> tempX;
    cout <<  "Y component:" ;
    cin >> tempY;
    cout <<  "Z component:" ;
    cin >> tempZ;
    v1.setX(tempX);
    v1.setY(tempY);
    v1.setZ(tempZ);
    
    cout << "Enter the components for vector 2:" << endl;
    cout <<  "X component:" ;
    cin >> tempX;
    cout <<  "Y component:" ;
    cin >> tempY;
    cout <<  "Z component:" ;
    cin >> tempZ;
    v2.setX(tempX);
    v2.setY(tempY);
    v2.setZ(tempZ);
    
    cout << "The two vectors are:" << endl;
    v1.Display();
    v2.Display();
    
    cout << "The addition of two vectors is:" << endl;
    v3 = v1 + v2;
    v3.Display();
    
    if( v1*v2 == 0 )
        cout << "The two vectors are perpendicular to each other" << endl;
    else cout << "The two vectors are not perpendicular to each other" << endl;
    
    
    return 0;
}
