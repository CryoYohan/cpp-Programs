/*A simple ATM Machine program*/
#include <iostream>
using namespace std;

int main (){
    int pin = 8080, opt, withdraw, deposit, balance = 1000, num;
    cout << "Enter pin: ";
    cin >> num;
//If the user enters a wrong pin, it loops until it gets the correct pin
    while (num!=pin){
        cout << "Invalid Pin" << endl;
        cout << "Enter pin: ";
        cin >> num;
    }
    if (num==pin){
        cout << "Successfully logged in." << endl;
    }
 //The user gets to choose if he/she wants to WITHDRAW, DEPOSIT or CHECK BALANCE
    cout << "Press 1 to CHECK BALANCE\nPress 2 to WITHDRAW\nPress 3 to DEPOSIT "<< endl << "Input: ";
    cin >> opt;
//If user inputs 1, the current balance is displayed
    if (opt==1){
        cout << "Your balance is: " << "$" << balance;
    }
//If the user inputs 2, the user will have to input the amount to withdraw then displays the cash withdrawn and the remaining balance
    else if (opt==2){
        cout << "Enter amount to withdraw: ";
        cin >> withdraw;
//If the user inputs an amount that is greater than the current balance, this will display insufficient funds
    }if (withdraw<=balance){
        cout << "Cash withdrawn: " << "$" << withdraw << endl;
        cout << "Remaining balance: " << "$" << balance - withdraw;
/*Else if the inputted amount is less than or equal to balance, the balance will be deducted from the inputted amount and displays
  amount withdrawn and remaining balance*/
    }else if (withdraw>balance){
        cout << "Insufficient funds";
    }
//If the user inputs 3, the amount inputted to deposit will be added to the balance and displays the new balance
    if (opt==3){
        cout << "Enter amount to deposit: ";
        cin >> deposit;
        cout << "New Balance: " << "$" << deposit + balance;
    }
    return 0;
}
