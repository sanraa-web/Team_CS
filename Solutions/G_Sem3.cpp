#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N); // longitud N
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int operations = 0;

    while (true) { // mejor loop que for
        sort(A.begin(), A.end(), greater<int>()); // sort() ordena en descendente por defecto 

        //condicion para detenerse
        if (A[0] <= 0 || A[1] <= 0) {
            break;
        }
        // Operaciones
        A[0]--;
        A[1]--;
        operations++;
    }

    cout << operations << endl;

    return 0;
}