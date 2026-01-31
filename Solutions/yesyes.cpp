#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        // string de yes
        string base = "";
        for (int i = 0; i < 20; i++) { // en verdad necesitamos 17
            base += "Yes";
        }

        // buscar si existe la subcadena
        if (base.find(s) != string::npos) { // npos indica no encontrado
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}