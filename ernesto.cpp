#include <iostream>
using namespace std;

int main (){

    int num, result = 0;

   do {
   cout << "Enter a number: ";
   cin >> num;

   if (num!=200){
    result+=num;
   cout << result << endl;
   }
   if (result == 499){
    cout << "You're off to a good start\n";
   }
   if (result==999){
    cout << "You're halfway through!\n";
   }
   if (result==1499){
    cout << "You're almost there!\n";
   }
   }while (result<=2000 && num!=-1);
    cout << "Congratulations! Your total sales are: " << result;
}

