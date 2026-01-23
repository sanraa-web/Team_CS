#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c;
    cin >> n >> c;

    int p[n], t[n];
    for (int i = 0; i < n; i++) cin >> p[i];
    for (int i = 0; i < n; i++) cin >> t[i];

    long long limak_score = 0;
    long long current_time = 0;


    // p - c * t ; t es acumulativo

    // problemas del 1 al n
    for (int i = 0; i < n; i++) {
        current_time += t[i];
        limak_score += max(0LL, (long long)p[i] - c * current_time); // el c * t se sale del rango de int
    }

    long long radewoosh_score = 0;
    current_time = 0; // resetear tiempo

    // problemas del n al 1
    for (int i = n - 1; i >= 0; i--) {
        current_time += t[i];
        radewoosh_score += max(0LL, (long long)p[i] - c * current_time);
    }

    // Determine the winner
    if (limak_score > radewoosh_score) {
        cout << "Limak" << endl;
    } else if (radewoosh_score > limak_score) {
        cout << "Radewoosh" << endl;
    } else {
        cout << "Tie" << endl;
    }

    return 0;
}