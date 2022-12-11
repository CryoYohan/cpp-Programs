#include <iostream>
using namespace std;

int main (){

    int num;
    char input;



    do {
        cout << "Enter a number: ";
        cin >> num;

        if (num%2==0){
            if (num%4==0){
                cout << "Number is divisible by 4\n";
            }
            else {
                cout << "Number is divisible by 2\n";
            }
        }
        else if (num%2!=0){
            if (num%3==0){
                cout << "Number is divisible by 3\n";
            }
            else {
                cout << "Number is odd\n";
            }
        }
        cout << "Do you wish to continue? (Y/N):";
        cin >> input;
    }while (input != 'N');
    cout << "LOOP ENDED";
}
