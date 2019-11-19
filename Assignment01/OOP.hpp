//
//  OOP.hpp
//  Assignment01
//
//  Created by Jeanne Mystery on 2018/4/1.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#ifndef OOP_hpp
#define OOP_hpp

#include <stdio.h>
class Opt_library{
private:
    int card_number;
    int valid_days_left;
    int books_issued;
    int books_returned;
    int Number_of_books;
    
public:
    Opt_library();
    Opt_library(int a,int b,int c,int d);
    ~Opt_library(); //Destructor
    
    //getter
    int get_card_number();
    int get_valid_days_left();
    int get_books_issued();
    int get_books_returned();
    int get_Number_of_books();
    
    //setter
    void set_card_number( int n );
    void set_valid_days_left( int d );
    void set_books_issued( int i );
    void set_books_returned( int r );
    void set_Number_of_books( int N );
    
    int status_find();
    //This member function will check whether it is required to return some books on the particular card or the status has been cleared.
    //The status will be cleared if all the issued books have also returned.
    
    int issue_books();
    // issue books against the current operation on the library card.
    
    void display();
    //will finally display the message after the issue of the books saying
    //"Number_of_books book(s), issued to the card_number."
};
#endif /* OOP_hpp */
