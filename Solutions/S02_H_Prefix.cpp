#include <bits/stdc++.h>
using namespace std;

int main() {
    string word_1, word_2;
    cin >> word_1 >> word_2;

    if (word_1.size() > word_2.size()) {
        cout << "No\n";
        return 0;
    }
    
    for (size_t i = 0; i < word_1.size(); i++) {
        if (word_1[i] != word_2[i]) {
            cout << "No\n";
            return 0;
        }
    }

    cout << "Yes\n";
    return 0;
}