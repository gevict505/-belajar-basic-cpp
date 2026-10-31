#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    char lanjut;
    while (true){
        cout << "Lempar dadu kah? (y/n)";
        cin >> lanjut;

        if(lanjut == 'y'){
            cout << 1 + (rand() % 6) << endl;
        }else if(lanjut == 'n'){
            break;
        }else{
            cout << "Warning: masukkan y atau n!\n";
        }
    }
    
    cin.get();
    return 0;
}