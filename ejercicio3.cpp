#include <iostream>
using namespace std;
int main() {
int cantidad;
cout << "Cuantos numeros vas a ingresar? ";
cin >> cantidad;
int numeros[cantidad];
int inversos[cantidad];
for (int i = 0; i < cantidad; i++) {
    cout << "Numero " << i + 1 << ": ";
    cin >> numeros[i];
}
for (int i = 0; i < cantidad; i++) {
    inversos[i] = numeros[i] * -1;
 }
 for (int i = 0; i < cantidad; i++) {
    cout << "Inverso de " << numeros[i] << " es: " << inversos[i] << "\n";
}
return 0;
}
