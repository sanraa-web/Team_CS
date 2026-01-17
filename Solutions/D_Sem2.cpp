#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    for (int i = 1; i <= N; i++) { 
        int p;
        cin >> p;
        if (p == X) { // Se asueme que se imprime de corrido la lista de numeros
            cout << i << endl; // imprime la posicion
            break;
        }
    }

    return 0;
}