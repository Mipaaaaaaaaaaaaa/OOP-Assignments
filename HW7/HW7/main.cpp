//
//  main.cpp
//  HW7
//
//  Created by Jeanne Mystery on 2018/3/28.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#include <iostream>
#include <time.h>
#include <ctime>
using namespace std;
class StopWatch{
private:
    double startTime;
    double endTime;
public:
    double getter_startTime(){
        return startTime;
    }
    double getter_endTime(){
        return endTime;
    }
    StopWatch(){
        startTime = clock();
    }
    void start(){
        startTime = clock();
    }
    void stop(){
        endTime = clock();
    }
    double getElapseTime(){
        return -(startTime - endTime);
    }
};

void selectArray(short * pArray, short count) {
    
    short temp; //存储每次选择元素的数值
    short k; //存储所选择元素的小标
    
    for (short i = 0; i < count; i ++) {
        temp = pArray[i];
        k = i;
        for (short j = i; j < count; j ++) {
            if (temp > pArray[j]) {
                temp = pArray[j];
                k = j;
            }
        }
        pArray[k] = pArray[i];
        pArray[i] = temp;
    }
}

int main(int argc, const char * argv[]) {
    StopWatch MyWatch;
    short p[100000];
    for( int i = 0 ; i < 100000 ; i++ ){
        p[i] = rand()%999999;
    }
    MyWatch.start();
    selectArray(p, 100000);
    MyWatch.stop();
    cout << MyWatch.getElapseTime() << "ms" << endl;
    return 0;
}
