#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int a[5][5];
    int row, col;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> a[i][j];
            if (a[i][j] == 1) {
                row = i;
                col = j;
            }
        }
    }
    int steps = abs(row - 2) + abs(col - 2);
    cout << steps << endl;
    return 0;
}