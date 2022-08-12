#include <iostream>
#include <string>
using namespace std;

void show_menu(){
    cout << "******** Menu ********" << endl;
    cout << "1. Check balance" << endl ;
    cout << "2. Deposit funds" << endl;
    cout << "3. Withdraw funds" << endl;
    cout << "4. Exit cli" << endl;
    cout << "***********************" << endl;
    system("cls");
}

int main(){
    show_menu();
    system("pause>0");
}