//
//  main.cpp
//  Assignment6#t3
//
//  Created by Jeanne Mystery on 2018/6/3.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#include <iostream>
#include <string.h>
#include <type_traits>
#include <cstdint>

using namespace std;
template<class t> struct is_char{
    operator bool(){
        return false;
    }
};

template<class T>
class Gpa{
private:
    T result[5];
public:
    Gpa(){};
    ~Gpa(){};
    void input(){
        cout << "Enter student's ";
        if( std::is_same<T, int>::value )
            cout << "marks";
        if( std::is_same<T,char>::value )
            cout << "grades";
        cout << " in each course:" << endl;
        for( int i = 0 ; i < 5 ; i ++ ){
            cin >> result[i];
        }
    }
    
    void cal_gpa(){
        float gpa = 0;
        if( std::is_same<T, int>::value ){
            for(int i = 0 ; i < 5 ; i++ ){
                if( result[i] >= 80 )
                    gpa += 12;
                else if( result[i] >= 70 )
                    gpa += 9;
                else if( result[i] >= 60 )
                    gpa += 6;
                else if( result[i] >= 50 )
                    gpa += 3;
            }
            cout << "This student's Gpa is " << gpa/15 << endl;
        }
        if( std::is_same<T,char>::value ){
            for(int i = 0 ; i < 5 ; i++ ){
                switch(result[i]){
                        case 'A':
                            gpa+=12;
                            break;
                        case 'B':
                            gpa+=9;
                            break;
                        case 'C':
                            gpa+=6;
                            break;
                        case 'D':
                            gpa+=3;
                            break;
                        default:
                            break;
                }
            }
            cout << "This student's Gpa is " << gpa/15 << endl;
        }
    }
};

int main(int argc, const char * argv[]) {
    Gpa<int> c1;
    Gpa<char> c2;
    c1.input();
    c1.cal_gpa();
    c2.input();
    c2.cal_gpa();
    return 0;
}
