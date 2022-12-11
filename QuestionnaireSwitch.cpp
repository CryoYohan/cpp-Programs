#include <iostream>
using namespace std;

int main (){
    char ans = 'A'; 'B'; 'C';
    string answer_A = "Great White Shark ", answer_B = "Mako Shark ", answer_C = "Whale Shark ";

    cout << "1.) Which species of sharks is the largest?" << endl << endl << "A. " << answer_A << "B. " << answer_B << "C. " << answer_C << endl << endl <<"Enter your answer in capital letters: ";
    cin >> ans;

    switch (ans){
        case 'A':
        cout << endl << "Wrong Answer. " << endl << endl;
        break;

        case 'B':
        cout << endl << "Wrong Answer. " << endl << endl;
        break;

        case 'C':
        cout << endl << "Correct Answer. " << endl << endl;
        break;

    }
    string name_1 = "Diva", name_2 = "Cheerful Thrudd", name_3 = "Zilch";
    cout << "2.) Her laugh is as cheerful as the morning sun, her eyes are as beautiful as the wonderful views of nature.Staring at it is mesmerizing." << " You are as beautiful as idealistic thoughts that fill the mind.For in time I wish to find.A sign of pure love that can be called mine. " << "You are as smart as the famous scholars.You are as dazzling as the suns reflection on the serene sea." << endl << "Who am I referring to? " << endl;
    cout << endl << "A. " << name_1 << " B. " << name_2 << " C. " << name_3 <<  endl <<"Enter your answer in capital letters: " << endl;
    cin >> ans;

    switch (ans){
        case 'A':
        cout << endl << "Correct Answer <3" << endl << endl;
        break;
        
        case 'B':
        cout << endl << "Nope, wrong answer." << endl << endl;

        case 'C':
        cout << endl << "Nope, wrong answer." << endl << endl;
        break;
            
    }
    
}