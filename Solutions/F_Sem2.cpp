#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    for (int i = S.size() - 1; i >= 0; i--) { // empezomos del final hasta el inicio
        if (S[i] == 'a') {
            cout << i + 1 << endl; // Indice empieza en 1
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}