// Print all the number upto N without using semi colon 

#include <iostream>
using namespace std;

int main(){
    int N;

    cout << "Enter the Number: ";
    cin >> N;

    for(int i = 1; i <= N; i++){
        cout << i << " ";
    }
    return 0;
}