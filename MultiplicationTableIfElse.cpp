#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int num;

    cout << "Enter a number:";
    cin >> num;


    if (num){
        cout << num << "x1 = " << num * 1 << endl;
        cout << num << "x2 = " << num * 2 << endl;
        cout << num << "x3 = " << num * 3 << endl;
        cout << num << "x4 = " << num * 4 << endl;
        cout << num << "x5 = " << num * 5 << endl;
        cout << num << "x6 = " << num * 6 << endl;
        cout << num << "x7 = " << num * 7 << endl;
        cout << num << "x8 = " << num * 8 << endl;
        cout << num << "x9 = " << num * 9 << endl;
        cout << num << "x10 = " << num * 10 << endl;
    }
    else {
        cout << "Error!";
    }
}

