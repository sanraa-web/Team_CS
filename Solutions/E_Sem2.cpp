#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> A(N); // array sin limmites yipee
    // 2 3 5 6 7 8 9 0 0
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < K; i++) {
        // eliminar el primer elemento
        A.erase(A.begin());
        // agregar 0 al final
        A.push_back(0);
    }

    for (int i = 0; i < N; i++) {
        cout << A[i] << (i + 1 < N ? ' ' : '\n');
    }

    return 0;
}