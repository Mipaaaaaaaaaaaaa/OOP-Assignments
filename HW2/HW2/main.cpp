//
//  main.cpp
//  HW2
//
//  Created by Jeanne Mystery on 2018/3/28.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#include <iostream>

class Fan{
private:
    int speed;
    bool on;
    double radius;
public:
    void create(){
        speed = 1;
        on = true;
        radius = 5;
    }
    int getter_speed(){
        return speed;
    }
    bool getter_on(){
        return on;
    }
    double getter_radius(){
        return radius;
    }
    void setter_speed( int a ){
        if( a == 1 || a == 2 || a == 3 )
            speed = a;
    }
    void setter_on( bool n ){
        on = n;
    }
    void setter_radius( double b ){
        radius = b;
    }
};

int main(int argc, const char * argv[]) {
    Fan a,b;
    a.setter_on(true);
    a.setter_speed(3);
    a.setter_radius(10);
    b.setter_on(false);
    b.setter_radius(5);
    b.setter_speed(2);
    
    std::cout << "Number\tState\tSpeed\tRadius" << std::endl;
    std::cout << "1\t\t" << a.getter_on() << "\t\t" << a.getter_speed() << "\t\t" << a.getter_radius() << std::endl;
    std::cout << "2\t\t" << b.getter_on() << "\t\t" << b.getter_speed() << "\t\t" << b.getter_radius() << std::endl;
    return 0;
}
