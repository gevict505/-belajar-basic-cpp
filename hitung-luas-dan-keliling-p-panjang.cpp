#include <iostream>
using namespace std;

//luas p.panjang
double hitung_luas (double p, double l){
    double luas = p * l;
    return luas;
}
//keliling p.panjang
double hitung_keliling (double p, double l){
    double keliling = 2 * ( p + l );
    return keliling;
}

int main(){
    
    double panjang, lebar;
    cout << "Panjang: ";
    cin >> panjang;
    cout << "Lebar: ";
    cin >> lebar;

    cout << "Luasnya adalah: "; 
    cout << hitung_luas(panjang, lebar) << endl;
    cout << "Kelilingnya adalah: ";
    cout << hitung_keliling(panjang, lebar) << endl;

    cin.get();
    return 0;
}