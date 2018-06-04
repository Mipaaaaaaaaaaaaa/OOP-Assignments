//
//  main.cpp
//  Assignment02_01
//
//  Created by Jeanne Mystery on 2018/4/11.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#include <iostream>
#include "class.hpp"
using namespace std;



int main(int argc, const char * argv[]) {
    Bill t;
    double tempp;
    int tempq;
    for( ; Purchased_item::item_num < 5 ; Purchased_item::item_num ++){
        cout << "enter price and purchased quantity of item " << Purchased_item::item_num+1 << endl;
        cout << "Price:" ;
        cin >> tempp;
        cout << "Quantity:" ;
        cin >> tempq;
        t.items[Purchased_item::item_num].setter_price(tempp);
        t.items[Purchased_item::item_num].setter_quantity(tempq);
    }
    t.calculate();
    
    cout << "Total amount to be paid is" << t.getter_amout() << endl;

    
    return 0;
}
