#include <iostream>
using namespace std;

int main (){

    int pin;
    int lastpin, i, newpin;

    while (pin!=14344){
        cout << "Enter sweetest number: ";
        cin >> pin;

        if (pin==14344){
            cout << "Log in successful!\n";
        }
        else {
            cout << "Invalid Pin! Try again.\n";
        }
    }
    cout << "ENTER CORRECT PIN TO REVEAL MY CRUSH\n";
    cout << "HINT: My Birthday\n:";
    cout << "Enter correct pin: ";
    cin >> lastpin;

    while(lastpin!=906){
        cout << "Wrong! Try again!";
        cout << "Enter correct pin: ";
        cin >> lastpin;
    }
    cout << " left shift 10,
     FL\n";
    cout << "I really like her, enter a number on how many times i want to say i like her, this is kinda cringe: ";
    cin >> newpin;

    for ( i = 1; i <= newpin; i++){
        cout << "I like you <3 hehe\n";
    }
    return 0;
}
