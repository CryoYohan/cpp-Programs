#include <iostream>
using namespace std;

int main (){

    int n= 5;
    //Iteration for outer loop//
    //This loop will run five times//
    for (int i=n; i>=1;i--){//Outer loop is for the 5 columns to be executed//
       for (int j=i; j>0; j--){//The inner loop here is responsible for the rows//
           cout << "*";
       }
        cout << endl; //This endline here is for the columns//
    }
    
      return 0;   

}
