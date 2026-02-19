#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;

    long long par_1 = -1, par_2 = -1;
    long long impar_1 = -1, impar_2 = -1;

    for (int i = 0; i < n; i++){
        long long a;
        cin >> a;

        if (a % 2 == 0) {
            if (a > par_1) {
                par_2 = par_1;
                par_1 = a;
            } else if (a > par_2){
                par_2 = a;
            }
        } else {
            if (a > impar_1) {
                impar_2 = impar_1;
                impar_1 = a;
            } else if (a > impar_2) {
                impar_2 = a;
            }
        }
    }

    long long resultado = -1;

    if (par_2 != -1) {
        resultado = max(resultado, par_1 + par_2);
    }
    if (impar_2 != -1) {
        resultado = max(resultado, impar_1 + impar_2);
    }

    cout << resultado << "\n";
    return 0;
}