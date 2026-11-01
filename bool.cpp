#include <iostream>

using namespace std;

int main(){
    int a = 3, b = 3;

    bool hasil1, hasil2;

    //sebanding
    hasil1 = (a == b);
    cout << hasil1 << endl;
    
    //tidak sebanding
    hasil2 = (a != b);
    cout << hasil2 << endl;

    cin.get();
    return 0;
}