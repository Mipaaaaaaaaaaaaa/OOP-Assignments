//
//  main.cpp
//  HW5
//
//  Created by Jeanne Mystery on 2018/3/28.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#include <iostream>
#include <time.h>

class Time{
private:
    int hour;
    int minute;
    int second;
public:
    Time(){
        int t;
        t = time(0);
        hour = (t%(24*3600)/3600 + 8 )%24;
        minute = t%3600/60;
        second = t%60;
    }
    Time( int a ){
        second = a%60;
        minute = a%3600/60;
        hour = (a%(24*3600)/3600 + 8 )%24;
    }
    int getter_hour(){
        return hour;
    }
    int getter_minute(){
        return minute;
    }
    int getter_second(){
        return second;
    }
    void setTime( int elapseTime ){
        int time = hour*24*3600 + second*60 + minute;
        elapseTime += time;
        second = elapseTime%60;
        minute = elapseTime%3600/60;
        hour = (elapseTime%(24*3600)/3600 + 8 )%24;
    }
};
int main(int argc, const char * argv[]) {
    Time a,b;
    a = Time();
    b = Time(555550);
    
    std::cout << "Number\tHour\tMinute\tSecond" << std::endl;
    std::cout << "1\t\t" << a.getter_hour() << "\t\t" << a.getter_minute() << "\t\t" <<
    a.getter_second() << std::endl;
    std::cout << "2\t\t" << b.getter_hour() << "\t\t" << b.getter_minute() << "\t\t" <<
    b.getter_second() << std::endl;
    
    return 0;
}
