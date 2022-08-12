#include <iostream>
#include <string>
#include<stdlib.h>

using namespace std;

// create structure
struct atm {
    int balance = 500;
    string account_name;
    string last_deposit_time;
};

int check_balance() {
    atm balance_model;

    // lets hard code the balance for now
    balance_model.balance = 500;

    // let's say for everytime you check the bal
    // you get free 10$ as coupon for checks if its zero
    if (balance_model.balance == 0) {
        balance_model.balance += 10;
    }
    return balance_model.balance;
}

int deposit_funds(int deposit_amount){
    atm user_atm_acc;

    // get user balance from struct obj
    int get_balance_from_user = user_atm_acc.balance;
    cout << "deposit amount" << endl;
    cin >> deposit_amount;

    // update the balance from deposit amount
    get_balance_from_user += deposit_amount;
    cout << "You deposited: "<< deposit_amount << "and the remaining amount is " << get_balance_from_user << endl;
    return get_balance_from_user;
}

int withdraw_money(int withdrawal_amount){
    atm user_atm_acc;

    // get remaining balance
    int get_rem_balance = user_atm_acc.balance;
    cout << "how much withdrawal" << endl;
    cin >> withdrawal_amount;

    // check if there's enough balance
    if (withdrawal_amount > get_rem_balance){
        cout << "insufficient funds";
    }

    get_rem_balance -= withdrawal_amount;
    cout << "You withdrew: "<< withdrawal_amount << "and the remaining amount is " << get_rem_balance << endl;
    return get_rem_balance;
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
    int option;
    cout << "select option: ";
    cin >> option;
    system("clear");

    do {
    switch (option)
    {
    case 1:
        check_balance();
        break;
    case 2:
        int deposit_amt;
        deposit_funds(deposit_amt);
        break;
    case 3: 
        int withdrawal_amt;
        withdraw_money(withdrawal_amt);
        break;
    default:
        break;
    }
    return 0;
} while(option != 4 || option >= 4);
} 