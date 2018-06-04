//
//  main.cpp
//  HW3
//
//  Created by Jeanne Mystery on 2018/3/28.
//  Copyright © 2018年 Jeanne Mystery. All rights reserved.
//

#include <iostream>
class Account{
private:
    int id;
    double balance;
    double annualInterestRate;
public:
    void createAccount(){
        id = 0;
        balance = 0;
        annualInterestRate = 0;
    }
    int getter_id(){
        return id;
    }
    double getter_balance(){
        return balance;
    }
    double getter_annualInterestRate(){
        return annualInterestRate;
    }
    void setter_id( int a ){
        id = a;
    }
    void setter_balance( double b ){
        balance = b;
    }
    void setter_annualInterestRate( double c ){
        annualInterestRate = c;
    }
    double getMonthlyInterestRate(){
        return annualInterestRate/12;
    }
    void withdraw( double amount ){
        balance -= amount;
    }
    void deposit( double amount ){
        balance += amount;
    }
};
int main(int argc, const char * argv[]) {
    Account test;
    test.setter_id(1122);
    test.setter_balance(20000);
    test.setter_annualInterestRate(0.045);
    test.withdraw(2500);
    test.deposit(3000);
    std::cout << "Balance\tMonthInterestRate\n";
    std::cout << test.getter_balance() << "\t" << test.getMonthlyInterestRate() << std::endl;
    return 0;
}
