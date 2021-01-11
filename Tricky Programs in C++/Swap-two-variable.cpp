// To swap the values of two variables without using any extra variable 

#include <iostream>
using namespace std;

int main(){
    int Num1, Num2;

    cout << "\n**********************\n";
    cout << "Enter First Number: ";
    cin >> Num1;
    cout << "Enter Second Number: ";
    cin >> Num2;
    cout << "**********************\n";

    Num1 = Num1 + Num2;
    Num2 = Num1 - Num2;
    Num1 = Num1 - Num2;

    cout << "First Number: " << Num1 << endl;
    cout << "Second Number: "<< Num2 << endl;

    return 0;
}