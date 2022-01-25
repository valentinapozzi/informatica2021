#include <iostream>
using namespace std;

int main (){
    double c1, c2;
    double area;

    cout << "inserisci il cateto maggiore del triangolo rettangolo: " << endl;
    cin >> c1;

    c2 = (c1 / 5) * 3;
    cout << "l'altro cateto misura: " << c2 << endl;

    area = c1 * c2;
    cout << "l'area del triangolo è: " << area << endl;

    return 0;
}