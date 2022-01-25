#include <iostream>
using namespace std;

int main () {

    double raggio, circonferenza;
    double area;

    cout << "inserisci il raggio: " << endl;
    cin >> raggio;

    circonferenza = ( raggio * 2 ) * 3.14;
    cout << "la circonferenza è: " << circonferenza << endl;

    area = (raggio * raggio) * 3.14;
    cout << "l'area è: " << area;

    return 0;
}