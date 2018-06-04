//
//  main.cpp
//  HW8
//
//  Created by Jeanne Mystery on 2018/3/28.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#include <iostream>
#include <time.h>

class Date{
private:
    int year;
    int month;
    int day;
public:
    Date(){
        time_t now = time(0);
        tm* ltm = localtime(&now);
        year = 1900 + ltm->tm_year;
        month = 1 + ltm->tm_mon;
        day = ltm->tm_mday;
    }
    Date( time_t now ){
        tm* ltm = localtime(&now);
        year = 1900 + ltm->tm_year;
        month = 1 + ltm->tm_mon;
        day = ltm->tm_mday;
    }
    Date( int y , int m , int d ){
        year = y;
        month = m;
        day = d;
    }
    int getter_year(){
        return year;
    }
    int getter_month(){
        return month;
    }
    int getter_day(){
        return day;
    }
    void setDate( int elapseTime ){
        time 
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
