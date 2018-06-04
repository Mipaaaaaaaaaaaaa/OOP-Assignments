//
//  main.cpp
//  HW11
//
//  Created by Jeanne Mystery on 2018/3/29.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#include <iostream>
using namespace std;
class EvenNumber{
private:
    int value;
public:
    EvenNumber(){
        value = 0;
    }
    EvenNumber( int N ){
        value = N;
    }
    int getValue(){
        return value;
    }
    EvenNumber getNext(){
        if( value%2 )
            return EvenNumber(value+1);
        else return EvenNumber(value+2);
    }
    EvenNumber getPrevious(){
        if( value%2 )
            return EvenNumber(value-1);
        else return EvenNumber(value-2);
    }
};

int main(int argc, const char * argv[]) {
    EvenNumber test;
    test = EvenNumber(16);
    cout << "Before:" << test.getValue() << "\nNext:";
        test = test.getNext();
    cout << test.getValue() << "\nPrevious:";
        test = EvenNumber(16);
        test = test.getPrevious();
    cout << test.getValue() << endl;
    return 0;
}
