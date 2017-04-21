#include <iostream>

using namespace std;

void deposit(float & bal);
void withdraw(float & bal);
void checkbalance(float bal);

int main()
{
    float balance = 1000.0f;
    bool quitter = false;
    char option;

    while (quitter == false) {
        option = '0';
        cout << "#######################\n# Welcome to the Bank #\n#######################\nPlease enter a number cooresponding to the desired option, followed by the return key.\n (1) Deposit\n (2) Withdraw\n (3) Check Balance\n (4) Exit\n\n>";
        cin >> option;
        switch (option) {
            case '1' : deposit(balance); break;
            case '2' : withdraw(balance); break;
            case '3' : checkbalance(balance); break;
            case '4' : quitter = true; break;
            default : cout << "Incorrect input. Try again.\n\n";
        }
    }
    cout << "Goodbye...\n";
    return 0;
}

void deposit(float & bal)
{
    float deposit = 0.0f;
    
    cout << "Input amount to deposit, followed by the return key.\n>";
    cin >> deposit;
    if (deposit < 0) deposit = deposit * -1;
    
    bal = bal + deposit;
    cout << "You entered " << deposit << ". Your new balance is " << bal << "\n\n";
}
void withdraw(float & bal)
{
    float withdrawal = 0.0f;
    
    cout << "Input amount to withdraw, followed by the return key.\n>";
    cin >> withdrawal;
    if (withdrawal < 0) withdrawal = withdrawal * -1;
    
    if (withdrawal > bal) {
        cout << "The value you entered is greater than the amount of money in your account. No money withdrawn.\n\n";
    } else { 
        bal = bal - withdrawal;
        cout << "You entered " << withdrawal << ". Your new balance is " << bal << "\n\n";
    }
}
void checkbalance(float bal)
{
    cout << "Your current balance is " << bal << "\n\n";
}

