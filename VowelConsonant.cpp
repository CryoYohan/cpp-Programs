#include <iostream>
#include <cctype>
using namespace std;

int main (){

    char c[10] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
    char a, choice;

    do {
        cout << "Enter a character: ";
        cin >> a;

        if (a == c[0] || a == c[1] || a == c[2] || a == c[3] || a == c[4] || a == c[5] || a == c[6] || a == c[7] || a == c[8] || a == c[9]){
            cout << "Vowel\n";
        }
        else if (isalpha(a)) {
           if (islower(a)){
               cout << "Lowercase\n";
            }
            else if (isupper(a)){
                cout << "Uppercase\n";
            }
        }
        else if (isdigit(a)){
            if (isdigit(a) < 5){
                cout << "First-half\n";
            }
            else if (isdigit(a) >= 5){
                cout << "Second-half\n";
            }
        }
        else {
            cout << "Others\n";
        }
        cout << "Do you wish to continue? (Y/N): ";
        cin >> choice;
    }while (choice !='N');
    cout << "Loop Ended";
}
