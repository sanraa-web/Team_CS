#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<long long> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    long long movimientos = 0;

    // Empezamos desde el segundo elemento 
    for (int i = 1; i < n; i++) {
        // Si es menor que el anterior
        if (x[i] < x[i-1]) {
            // Si tenemos a b a c -> a b b c 
            movimientos += (x[i-1] - x[i]);
            // Que sea igual para que cumple la ascendencia
            x[i] = x[i-1];
        }
    }

    cout << movimientos << endl;

    return 0;
}