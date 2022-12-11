#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int num;
    int i = 1;
    cout << "Enter a number: ";
    cin >> num;
    for (i; i<10; i++){
        cout << "1x" << i << "= "<< num * i << endl;
    }
    
}