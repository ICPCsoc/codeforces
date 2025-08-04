#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    int q, p;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> q;
        cin >> p;
        if (p - q >= 2) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}