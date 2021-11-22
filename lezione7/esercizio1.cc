#include <iostream>
using namespace std;

int main (){
    double x = 5.5;
    double *p = NULL;

    cout << x << endl;
    cout << &x << endl;
    cout << p << endl;
    cout << &p << endl;

    p = &x; 
    cout << p << *p << endl;

    cout << "inserire un numero di tipo double =" << endl;
    cin >> *p;

    cout << x << endl;

    double *v = new double [10];
    for(int i = 0; i < 10; i++){
        cout << &v[i] << endl;
    } 


    return 0;
}