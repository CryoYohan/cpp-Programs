#include <iostream>
using namespace std;

int main (){

    char input;

    do {
        cout << "Enter a character: ";
        cin >> input;

        if (input == 'Y'){
            cout << "Continuing...\n";
        }
    }while (input=='Y');
    cout << "Exiting...\n";
    return 0;
}
