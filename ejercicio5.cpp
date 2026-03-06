#include <iostream>
using namespace std;

int addFive(int num) {
    num = num + 5;
    return num;
}

int main() {
    int numero;
    cout << "Ingresa un numero: ";
    cin >> numero;
    cout << "Resultado: " << addFive(numero) << endl;
    return 0;
}
