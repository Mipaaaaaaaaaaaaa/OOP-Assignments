//
//  main.cpp
//  Assignment04#Polymorphism
//
//  Created by Jeanne Mystery on 2018/5/17.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#include <iostream>
using namespace std;
class TVChannel{
public:
    virtual void DisplayName() = 0;
};

class NewsChannel:public TVChannel{
    void DisplayName(){
        cout << "This is NewsChannel" << endl ;
    }
};

class MusicChannel:public TVChannel{
    void DisplayName(){
        cout << "This is MusicChannel" << endl;
    }
};

int main(int argc, const char * argv[]) {
    TVChannel *ptr1,*ptr2;
    NewsChannel news;
    MusicChannel music;
    ptr1 = &news;
    ptr1->DisplayName();
    ptr2 = &music;
    ptr2->DisplayName();

    return 0;
}
