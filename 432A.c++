#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n, b;
    cin >> n >> b;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (5 - a >= b) {
            sum++;
        }
    }
    cout << sum / 3 << endl;
    return 0;
}