#include <iostream>
#include <string>
#include<stdlib.h>

using namespace std;

// create structure
struct atm {
    int balance;
    string account_name;
    string last_deposit_time;
};

int check_balance() {
    atm balance_model;

    // lets hard code the balance for now
    balance_model.balance = 500;

    // let's say for everytime you check the bal
    // you get free 10$ as coupon for checks if its zero
    if (balance_model.balance = 0) {
        balance_model.balance += 10;
    }
    return balance_model.balance;
}

void show_menu(){
    cout << "******** Menu ********" << endl;
    cout << "1. Check balance" << endl ;
    cout << "2. Deposit funds" << endl;
    cout << "3. Withdraw funds" << endl;
    cout << "4. Exit cli" << endl;
    cout << "***********************" << endl;
}

int main(){
    show_menu();
    double account_balance = 500;
    int option;
    do {
    switch (option)
    {
    case 1:
        cout << "The balance of the account is :" << account_balance << endl;
        break;
    case 2:
        double deposit_amount; 
        cout << "How much do you want to deposit" << endl;
        cin >> deposit_amount;
        account_balance += deposit_amount;
        break;
    case 3: 
        double withdrawal_amount;
        cout << "How much do you want to withdraw";
        cin >> withdrawal_amount;
        account_balance -= withdrawal_amount;
        break;
    default:
        break;
    }
    return 0;
} while(option != 4 || option >= 4);
} 