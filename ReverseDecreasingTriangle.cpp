#include <iostream>
using namespace std;

int main (){

    int n= 5;
    for (int i=n; i>=1;i--){//Outer loop is for the 5 columns to be executed//
       for (int k=n-i; k>0; k--){//Since n = 5 and i = 5, n-i = 0, so the first execution of this loop is that there will be no output.//
           //Thus, leaving no whitespace since 0>0 is false so it'll continue to the second inner for loop//
           cout << " ";
       }
      for(int j=i;j>0;j--){//This inner for loop is responsible for the rows of asterisks//
        cout << "*";
    }
        cout << endl;
    }

      return 0;

}
