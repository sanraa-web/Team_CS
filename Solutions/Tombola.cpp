//https://atcoder.jp/contests/abc437/tasks/abc437_b

#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W, N;
    cin >> H >> W >> N;

    // Almacenar Grid
    vector<vector<int>> grid(H, vector<int>(W));
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            cin >> grid[i][j];
        }
    }

    // Marcar
    bool called[100] = {false};
    for (int i = 0; i < N; ++i) {
        int b;
        cin >> b;
        called[b] = true;
    }

    int max_matches = 0;

    // chequeo
    for (int i = 0; i < H; ++i) {
        int current_row_count = 0;
        for (int j = 0; j < W; ++j) {
            
            if (called[grid[i][j]]) {
                current_row_count++;
            }
        }
        // compara
        max_matches = max(max_matches, current_row_count);
    }

    cout << max_matches << endl;

    return 0;
}