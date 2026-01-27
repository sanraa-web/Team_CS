#include <bits/stdc++.h>
using namespace std;

int a[100005]; // si esta afeura se evita el overflow y esos 5 adicionales es para evitar problemas tambien

int main() {
    int n;
    cin >> n;

    // Para cortar pasos
    if (n <= 2) {
        int temp;
        for(int i = 0; i < n; i++) cin >> temp;
        cout << 0 << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // menor a mayor
    sort(a, a + n);

    int count = 0;
    int minimo = a[0];
    int maximo = a[n - 1];

    for (int i = 0; i < n; i++) {
        if (a[i] > minimo && a[i] < maximo) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}