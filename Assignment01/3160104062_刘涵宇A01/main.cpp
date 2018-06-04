//
//  main.cpp
//  Assignment01
//
//  Created by Jeanne Mystery on 2018/3/12.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#include <iostream>
#include "OOP.hpp"

int main() {
    int flag1=0,flag2=0;
    Opt_library data; //constructor
    int a[4];
    
    //set
    std::cout << "Enter card number:" << std::endl;
    std::cin >> a[0];
    data.set_card_number(a[0]);
    
    std::cout << "Enter days left for the validation:" << std::endl;
    std::cin >> a[1];
    data.set_valid_days_left(a[1]);
    
    std::cout << "Enter number of books issued previously:" << std::endl;
    std::cin >> a[2];
    data.set_books_issued(a[2]);
    
    std::cout << "Enter number of books returned previously:" << std::endl;
    std::cin >> a[3];
    data.set_books_returned(a[3]);
    
     //get
    flag1 = data.status_find();
    if(flag1){
        std::cout << "The status has been cleared.\n" << std::endl;
        std::cout << "Card Number:\t" << data.get_card_number() << "\n"
        << "Valid days left:\t" << data.get_valid_days_left() << "\n"
        << "Books issued previously:\t" << data.get_books_issued() << "\n"
        << "Books returned previously:\t" << data.get_books_returned() << "\n" << std::endl;

        flag2 = data.issue_books();
        while(!flag2){
        flag2 = data.issue_books();
        }
        data.display();
    }
    
    return 0;
}

//destructor
