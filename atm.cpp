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
    double account_balance = 500;
    int option;
    cout << "select option: ";
    cin >> option;
    system("clear");

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
        cout << "The total balance is now: "<< account_balance << endl;
        break;
    case 3: 
        double withdrawal_amount;
        cout << "How much do you want to withdraw";
        cin >> withdrawal_amount;
        account_balance -= withdrawal_amount;
        cout << "You withdrew: "<< withdrawal_amount << "and the remaining amount is " << account_balance << endl;
        break;
    default:
        break;
    }
    return 0;
} while(option != 4 || option >= 4);
} 