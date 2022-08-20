#include <iostream>
#include <string>
#include<stdlib.h>

using namespace std;


// lets assume that we have a system to 
// detect a user's account from a myriad of acc nos in our systems
template<typename T> T fishAccInsertionSort(T account_number[]) {
    int len_of_accounts = len(account_number)
    for (i = 0; i < len_of_accounts; i++){
        for (j = i; j > 0; j -- ){
            if account_number[j-1] > account_number[j]{
                account_number[j-1], account_number[j] = account_number[j], account_number[j-1]
            }
        }
    }
}

template<typename T> T fishAccSelectionSort(T account_number[]) {
    int len_of_accounts = len(account_number)
    for (i = 0; i < len_of_accounts; i++){
        for (j = i + 1; j < len_of_accounts; j ++ ){
            if account_number[i] > account_number[j]{
                account_number[i], account_number[j] = account_number[j], account_number[i]
            }
        }
    }
}

template<typename T> T fishAccBubbleSort(T account_number[]) {
    int len_of_accounts = len(account_number);
    sorted = false;
    for(!sorted){
        for (i = 0; i < len_of_accounts - 1; i++){
            for (j = i; j > 0; j -- ){
                if account_number[i] > account_number[j]{
                    account_number[i], account_number[j] = account_number[j], account_number[i]
                }
            }
        }
    }
}



// create structure
template<class T> struct atm {
    int balance = 500;
};

int check_balance() {
    atm<int> balance_model;

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
    atm<int> user_atm_acc;

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
    atm<int> user_atm_acc;

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