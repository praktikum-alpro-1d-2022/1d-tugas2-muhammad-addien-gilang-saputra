#include <iostream>
using namespace std;

int main() {
    double a, b, tinggi, L;

    cout<<"Masukkan nilai a :";
    cin>> a;

    cout<<"Masukkan nilai b :";
    cin>> b;

    cout<<"Masukan tinggi: ";
    cin >> tinggi;

    L = 0.5*(a+b)*tinggi;
    cout<<"Luas trapesium: "<<L;

    return 0;
}
