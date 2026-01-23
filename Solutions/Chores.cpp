#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    long long h[n];
    for (int i = 0; i < n; i++) cin >> h[i];

    sort(h, h + n); // h[0] -> h[n-1] (inicio, final)

    long long L = h[b - 1];
    long long R = h[b];

    for (int i = 0; i < n; i++) cout << h[i] << " ";
    cout << max(0LL, R - L) << "\n";
    return 0;
}
