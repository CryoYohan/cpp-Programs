//This program creates a rectangle//
#include <iostream>
using namespace std;

int main (){

    char symbol;
    int width;
    int height;

    cout << "Enter a symbol: ";
    cin >> symbol;

    cout << "Enter width: ";
    cin >> width;

    cout << "Enter height: ";
    cin >> height;

    for (int i = 0; i<height; i++){
        for (int j = 0; j<width; j++){
            cout << symbol;
        }
        cout << endl;
    }

}
