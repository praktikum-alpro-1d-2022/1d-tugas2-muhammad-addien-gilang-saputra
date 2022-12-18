#include <iostream>
using namespace std;

int main() {
    double alas, tinggi, L;

    cout<<"Masukan alas: ";
    cin >> alas;

    cout<<"Masukan tinggi: ";
    cin >> tinggi;

    L = 0.5*alas*tinggi;
    cout<<"Luas segitiga: "<<L;

    return 0;
}
