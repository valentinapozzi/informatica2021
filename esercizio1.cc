#include <iostream>
using namespace std;

int main ()  {

    double x, y, z;
    double totale;

    cout << "inserisci il numero: " << endl;
    cin >> x;
    cout << "inserisci un numero: " << endl;
    cin >> y;
    cout << "inserisci un numero: " << endl;
    cin >> z;

    totale = x - y + z;
    cout << "il totale è: " << totale << endl;

    return 0;
}