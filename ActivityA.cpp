#include <iostream>
#include <string>
using namespace std;

int main (){

   string a;
    cin >> a;
    while (a<"*****"){
        a+="*";
        cout << a << endl;
    }
    return 0;
}
