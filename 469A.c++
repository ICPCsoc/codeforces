#include "bits/stdc++.h"
using namespace std;

int main() {
    int n;
    cin >> n;
    int passed[101] = {0}; 
    int p, q, level;
    cin >> p;
    for (int i = 0; i < p; i++) {
        cin >> level;
        passed[level] = 1;
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> level;
        passed[level] = 1;
    }
    for (int i = 1; i <= n; i++) {
        if (passed[i] == 0) {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    cout << "I become the guy." << endl;
    return 0;
}
