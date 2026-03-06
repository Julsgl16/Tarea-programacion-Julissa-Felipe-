#include <iostream>
#include <string>
using namespace std;

int main() {
    string cadena;
    long long decimal =0; 
    cout<< "ingrese un numero binario 1011 ";
        cin>> cadena;
    for (char c : cadena){
        if(c !='0' && c !='1'){
            cout << "Error, la cadena no es binaria\n";
            return 0; 
        }
        decimal = decimal *2+(c-'0');
    }
    cout<< "decimal: "<< decimal << "\n";
    return 0;
}
