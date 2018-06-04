//
//  main.cpp
//  HW4
//
//  Created by Jeanne Mystery on 2018/3/28.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#include <iostream>
#include <math.h>

class MyPoint{
private:
    double x,y;
public:
    void createPoint(){
        x = 0;
        y = 0;
    }
    void createPoint( double a, double b){
        x = a;
        y = b;
    }
    double getter_x(){
        return x;
    }
    double getter_y(){
        return y;
    }
    double distance( MyPoint b ){
        return sqrt((b.getter_x()-x)*(b.getter_x()-x)+(b.getter_y()-y)*(b.getter_y()-y));
    }
};
int main(int argc, const char * argv[]) {
    MyPoint a,b;
    a.createPoint();
    b.createPoint(10, 30.5);
    std::cout << "Distance:" << a.distance(b) << std::endl;
    return 0;
}
