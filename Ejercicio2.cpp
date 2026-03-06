int n;
cout << "Ingresa un numero entero positivo: ";
cin >> n;
int arreglo[n];
for (int i = 0; i < n; i++) {
    arreglo[i] = n - i;
}
cout << "[";
for (int i = 0; i < n; i++) {
    cout << arreglo[i];
    if (i < n - 1) cout << ", ";
}
cout << "]" << endl;
