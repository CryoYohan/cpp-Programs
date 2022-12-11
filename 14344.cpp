#include <iostream>
using namespace std;

int main (){

    int num;
    string choice;

   do {
       cout << "Enter sweetest number: ";
        cin >> num;

    if (num==14344){
        cout << "labyu\n";
    }
    else {
        cout << "hetyu\n";
    }
       cout << "Do you wish to continue?(YES/NO).\n";
       cin >> choice;

   }while (choice != "NO");
    cout << "You're out of the loop";
    return 0;
}
