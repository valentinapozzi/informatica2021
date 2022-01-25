#include <iostream>
using namespace std;

int main (){

    double base, altezza;
    double area;

    cout << "inserisci la base: " << endl;
    cin >> base;
    cout << "inserisci l'altezza: " << endl;
    cin >> altezza;

    area = (base * altezza) / 2;
    cout << "l'area del triangolo è: " << area;

    return 0;
}