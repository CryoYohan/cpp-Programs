#include <iostream>
using namespace std;

int main ()
{
    int num;
    char choice;
    do {
        cout << "Enter sweetest number: ";
        cin >> num;

        if (num==14344){
            cout << "labyU";
        }
        else if (num!=14344){
            cout << "Find iba";
        }


        cout << "(Y/N): ";
        cin >> choice;

    }while (choice!='N');
    cout << "Loop Ended";
}
