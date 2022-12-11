//Nested for loop printing Week number and week days//
#include <iostream>
using namespace std;

int main () {

    int i, f, day = 1;

    for (f=1;f<=4;f++){
        cout <<"Week " << f << endl;
        for (i=1; i<=7;i++, day++){
            cout << "\tDay " << i << ": " << day << endl;
        }
    }

}
