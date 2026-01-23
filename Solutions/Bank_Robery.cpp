#include <bits/stdc++.h>
using namespace std;

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    if (a <= b || a >= c ) return 0;

    int n;
    cin >> n;

    int collectible_count = 0;
    for (int i = 0; i < n; i++) {
        int x_i;
        cin >> x_i;
        // b < x_i < c rango de Oleg
        if (x_i > b && x_i < c) {
            collectible_count++;
        }
    }

    cout << collectible_count << endl;

    return 0;
}