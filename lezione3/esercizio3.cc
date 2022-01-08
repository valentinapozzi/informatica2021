#include <iostream>
using namespace std;

int main() {
    char nome[20];
    string cognome;
    int matricola;

    cout << "Inserisci il nome: " << endl;
    cin >> nome;
    cout << "Inserisci il cognome: " << endl;
    cin >> cognome;
    cout << "Inserisci la matricola: " << endl;
    cin >> matricola;

    cout << cognome << ", " << nome << " è registrato con numero matricola: " << matricola << endl;
}