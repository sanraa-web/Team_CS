// https://atcoder.jp/contests/abc425/tasks/abc425_a
// A - Sigma Cubes

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    if (!(cin >> N)) return 0;

    long long total = 0;

    for (int i = 1; i <= N; ++i) {
        long long temp = (long long)i * i * i;
        
        if (i % 2 == 0) {
            total += temp;
        } else {
            total -= temp;
        }
    }
    cout << total << endl;
    return 0;
}