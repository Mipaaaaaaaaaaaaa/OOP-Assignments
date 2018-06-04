//
//  class.cpp
//  Assignment02_01
//
//  Created by Jeanne Mystery on 2018/4/11.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#include "class.hpp"

Purchased_item::Purchased_item(){
        
    }
Purchased_item::~Purchased_item(){
        
    }
void Purchased_item::setter_price( double p ){
        price = p;
    }
void Purchased_item::setter_quantity( int q ){
        quantity = q;
    }

double Purchased_item::getter_price(){
        return price;
    }
int Purchased_item::getter_quantity(){
        return quantity;
    }

int Purchased_item::item_num = 0;

Bill::Bill(){
        
    }
Bill::~Bill(){
        
    }
void Bill::calculate(){
        total_amount = 0;
        for( int i = 0 ; i < 5 ; i ++ )
            total_amount += items[i].getter_price()*items[i].getter_quantity();
    }

int Bill::getter_amout(){
    return total_amount;
}
