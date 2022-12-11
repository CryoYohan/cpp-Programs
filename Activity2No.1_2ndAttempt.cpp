#include <iostream>
using namespace std;
int main (){
    int num;
    int bill [6] = {1000, 500, 200, 100, 50, 20};
    int coin [3] = {10, 5, 1};
    double cent [3] = {0.25, 0.10, 0.05};

    cin >> num;

    for (int i=0; i < 6; i++){
        if (num==0 || num<0){
            break;
        }
        cout << "Total number of " << bill [i] << " peso bills" << ": "<< num/bill[i] << endl;
    }
    for (int i=0; i < 3; i++){
        if (num==0 || num<0){
            break;
        }
        cout << "Total number of " << coin [i] << " peso coins" << ": "<< num/coin[i] << endl;
    }
    for (int i=0; i<3; i++){
        if (num==0 || num < 0){
            break;
        }
        cout << "Total number of " << cent [i] << " centavos" << ": "<< num/cent[i] << endl;
        }
    return 0;
}
