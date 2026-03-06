#include <iostream>
#include <string>
using namespace std;

int main() {
    string cadena;
    int pos1, pos2;

    cout << "Ingrese una cadena sin espacios: ";
    cin >> cadena;

    if (cadena.empty()) {
        cout << "Cadena vacia\n";
        return 0;
    }

    cout << "Ingrese posicion 1: ";
    cin >> pos1;
    cout << "Ingrese posicion 2: ";
    cin >> pos2;
    if (pos1 < 0) pos1 = 0;
    if (pos2 >= (int)cadena.size()) pos2 = (int)cadena.size() - 1;
    if (pos1 >= pos2) {
        cout << "Las posiciones no son validas para invertir\n";
        return 0;
    }

    while (pos1 < pos2) {
        char aux = cadena[pos1];
        cadena[pos1] = cadena[pos2];
        cadena[pos2] = aux;
        pos1++;
        pos2--;
    }
    cout << "Cadena resultante: " << cadena << endl;
    return 0;
}








    
}
    return 0;
