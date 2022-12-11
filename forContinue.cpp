//Using continue function in c++//
#include <iostream>
using namespace std;

int main(){

    int pin = 8080, num, ctr;

    for (ctr = 0; ctr <=20; ctr++){

        cout << "Enter pin: \n";
        cin >> num;

        if (num!=pin){
            cout << "Invalid Pin!\n\nTry again.\n\n";
            continue;
        }
        else {
            cout << "\nLog in successful!";
            break;
        }
    }
    return 0;
}

