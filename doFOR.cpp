#include <iostream>
#include <string>
using namespace std;

int main (){
    int num;
    for (int i=1;i <=5; i++){
        cout << "Enter a number: ";
        cin >>  num;

        if (num==5){
            cout << "Five";
            break;
        }
    }

}
