#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        // caso pequeño
        if (n < 6) {
            cout << 15 << endl;
            return 0;
        }

        // volver par si es impar
        if (n % 2 != 0) {
            n++;
        }

        // cada porcion demora 2.5 minutos
        cout << (n * 5) / 2 << endl;
    }
    return 0;
}