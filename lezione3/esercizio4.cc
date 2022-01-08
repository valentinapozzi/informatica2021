#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    char nome[20];
    string cognome;
    int matricola;
    fstream strm;

    cout << "Inserisci il nome: " << endl;
    cin >> nome;
    cout << "Inserisci il cognome: " << endl;
    cin >> cognome;
    cout << "Inserisci la matricola: " << endl;
    cin >> matricola;

    strm.open("risultato.dat", ios::out);
    if (strm.good()) {
        cout << cognome << ", " << nome << " è registrato con numero matricola: " << matricola << endl;
        strm << cognome << ", " << nome << " è registrato con numero matricola: " << matricola << ".\n";
        strm.close();
    }
    
    return 0;
}