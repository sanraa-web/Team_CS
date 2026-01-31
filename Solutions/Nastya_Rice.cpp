#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;

        // sum de n granos
        int min_grains = n * (a - b);
        int max_grains = n * (a + b);

        // rango del paquete
        int min_pack = c - d;
        int max_pack = c + d;

        
        if (max_grains < min_pack || min_grains > max_pack) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }
    return 0;
}