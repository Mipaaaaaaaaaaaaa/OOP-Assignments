//
//  class.hpp
//  Assignment02_01
//
//  Created by Jeanne Mystery on 2018/4/11.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#ifndef class_hpp
#define class_hpp

class Purchased_item{
private:
    double price;
    //for per unit price
    int quantity;
    //for quantity purchased
public:
    static int item_num;
    //for item number
    //should be static. This data member will be used to display the item number whose information is currently required from the user
    
    Purchased_item();
    ~Purchased_item();
    void setter_price( double p );
    void setter_quantity( int q );
    double getter_price();
    int getter_quantity();
};

class Bill{
private:
    int total_amount;
    //for the total amount of bill that is to be paid
public:
    Purchased_item items[5];
    //an array of purchased_item; should be 5 in size
    Bill();
    ~Bill();
    void calculate();
    int getter_amout();
};

#endif /* class_hpp */
