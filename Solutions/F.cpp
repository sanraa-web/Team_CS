#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y, z;
    int suma_x = 0, suma_y = 0, suma_z = 0;

    cin >> n;
    while (n--) {
        cin >> x >> y >> z;
        suma_x = suma_x + x;
        suma_y = suma_y + y;
        suma_z = suma_z + z;
    }

    if (suma_x == 0 && suma_y == 0 && suma_z == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO"  << endl;
    }

    return 0;
}

/*
for (int i = 0; i < n; i++){
    cin >> x >> y >> z;
    suma_x = suma_x + x;
    suma_y = suma_y + y;
    suma_z = suma_z + z;
}
*/
