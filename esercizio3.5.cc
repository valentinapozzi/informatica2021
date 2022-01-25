#include <iostream>
using namespace std;

int main (){

    int x;

    cout << "inserire un numero intero: " << endl;
    cin >> x;

    if (x/2==0){
        cout << x << " è un numero pari ";
    } else if (x % 2){
        cout << x << " è un numero dispari ";
    }

    return 0;
}