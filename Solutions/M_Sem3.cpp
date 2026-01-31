#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    
    // Todos los luckys
    vector<int> luckyNumbers = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    bool isAlmostLucky = false;

    // divisibilidad
    for (int lucky : luckyNumbers) {
        if (n % lucky == 0) {
            isAlmostLucky = true;
            break; 
        }
    }

    if (isAlmostLucky) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}