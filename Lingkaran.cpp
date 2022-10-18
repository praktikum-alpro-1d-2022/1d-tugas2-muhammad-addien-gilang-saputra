#include<iostream>

using namespace std;
int main(){
    float nilaiPhi, jariJari, nilaiKeliling;
    nilaiPhi = 3.14;

    cout<<"Masukkan nilai Jari-jari: ";
    cin>>jariJari;

    nilaiKeliling = 2*nilaiPhi*jariJari;
    cout<<"Keliling dari lingkaran tersebut adalah "<<nilaiKeliling<<endl;

    return 0;
}
