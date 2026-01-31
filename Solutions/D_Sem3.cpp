#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a[6];
    for (int i = 0; i < 6; i++) {
        cin >> a[i];
    }

    long long s = a[0] + a[1] + a[2];
    long long result = s * s - a[0]*a[0] - a[2]*a[2] - a[4]*a[4];

    cout << result << "\n";
    return 0;
}
