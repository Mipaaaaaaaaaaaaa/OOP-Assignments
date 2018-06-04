//
//  OOP.cpp
//  Assignment01
//
//  Created by Jeanne Mystery on 2018/4/1.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#include "OOP.hpp"
#include <iostream>


    Opt_library::Opt_library(){
        
    }; //Constructor

    Opt_library::Opt_library(int a,int b,int c,int d){
        card_number = a;
        valid_days_left = b;
        books_issued = c;
        books_returned = d;
    };

    Opt_library::~Opt_library(){
        
    }; //Destructor
    
    //getter
    int Opt_library::get_card_number(){
        return card_number;
    }


    int Opt_library::get_valid_days_left(){
        return valid_days_left;
    }

    int Opt_library::get_books_issued(){
        return books_issued;
    }

    int Opt_library::get_books_returned(){
        return books_returned;
    }

    int Opt_library::get_Number_of_books(){
        return Number_of_books;
    }
    
    //setter
    void Opt_library::set_card_number( int n ){
        card_number = n;
    }

    void Opt_library::set_valid_days_left( int d ){
        valid_days_left = d;
    }

    void Opt_library::set_books_issued( int i ){
        books_issued = i;
    }

    void Opt_library::set_books_returned( int r ){
        books_returned = r;
    }

    void Opt_library::set_Number_of_books( int N ){
        Number_of_books = N;
    }
    
    int Opt_library::status_find(){
        if( get_valid_days_left() < 15 ){
            std::cout <<"Books cannot be issued, there are not enough days left for the validity of card\n" << std::endl;
            return 0;
        }
        if( get_books_issued() < get_books_returned() ){
            std::cout <<"Number of books returned can not be greater than number of books issued\n" << std::endl;
            return 0;
        }
        if( get_books_issued() != get_books_returned() ){
            std::cout << "No further operations can be made. Some books are still not returned.\n"
            << std::endl;
            return 0;
        }
        else{
            return 1;
        }
    }
    //This member function will check whether it is required to return some books on the particular card or the status has been cleared.
    //The status will be cleared if all the issued books have also returned.
    
    int Opt_library::issue_books(){
        int n;
        std::cout << "Please enter the number of books to be issued:" << std::endl;
        std::cin >> n;
        set_Number_of_books(n);
        if( get_Number_of_books() > 2 ){
            std::cout <<"More than 2 books can not be issued at a time\n" <<std::endl;
            return 0;
        }
        else return 1;
    }
    // issue books against the current operation on the library card.
    
    void Opt_library::display(){
        std::cout << get_Number_of_books() << " book(s),issued to the "
        << get_card_number() << "\n" <<std::endl;
    }
    //will finally display the message after the issue of the books saying
    //"Number_of_books book(s), issued to the card_number."


