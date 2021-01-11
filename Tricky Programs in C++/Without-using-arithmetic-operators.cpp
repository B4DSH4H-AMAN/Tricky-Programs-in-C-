// To check if two numbers are equal without usiing arithmetic operators.

#include <iostream>
using namespace std;

int main(){
    int Num1, Num2;

    cout << "***************\n";
    cout << "Enter First Number: ";
    cin >> Num1;
    cout << "Enter Second Number: ";
    cin >> Num2;
    cout << "***************\n";

    if(!(Num1^Num2)){
        cout << "X is equal to Y";
    }else{
        cout << "X is not equal to Y";
    }

    return 0;
}