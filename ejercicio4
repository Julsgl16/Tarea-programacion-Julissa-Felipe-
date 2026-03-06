#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cadena;
    int pos1, pos2;
    cout << "ingrese una cadena sin espacios";
    cin >> cadena;
    cout << "ingrese posicion 1 ";
    cin >> pos1;
    cout << "ingrese posicion 2 ";
    cin >> pos2;

    if (cadena.empty()) {
        cout << "cadena vacia\n";
        return 0;
    }
    if (pos1 < 0) pos1 = 0;
    if (pos2 >= (int)cadena.size()) pos2 = (int)cadena.size() - 1;
    while (pos1 < pos2) {

        char aux = cadena[pos1];
        cadena[pos1] = cadena[pos2];
        cadena[pos2] = aux;

        pos1++;
        pos2--;
    }
    return 0;
}
