//
//  main.cpp
//  Hw1
//
//  Created by Jeanne Mystery on 2018/3/28.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#include <iostream>
class   Rectangle{
private:
    double width;
    double height;
public:
    void create_rectangle(){
        width = 1;
        height = 1;
    }
    double getter_width(){
        return width;
    }
    double getter_height(){
        return height;
    }
    void setter_width( double a){
        width = a;
    }
    void setter_height( double b ){
        height = b;
    }
    double getArea(){
        return width*height;
    }
    double getPerimeter(){
        return (width+height)*2;
    }
    
};

int main(int argc, const char * argv[]) {
    Rectangle a,b;
    a.setter_width(4);
    a.setter_height(40);
    b.setter_width(3.5);
    b.setter_height(35.9);
    std::cout << "Number\tWidth\tHeight\tArea\tPerimeter" << std::endl;
    std::cout << "1\t\t" << a.getter_width() << "\t\t" << a.getter_height() << "\t\t" << a.getArea() << "\t\t" <<
    a.getPerimeter() << std::endl;
    std::cout << "2\t\t" << b.getter_width() << "\t\t" << b.getter_height() << "\t" << b.getArea() << "\t" <<
    b.getPerimeter() << std::endl;
    return 0;
}
