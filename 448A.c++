#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int a1, a2, a3, b1, b2, b3, n;
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    cin >> n;
    int cup = a1 + a2 + a3;
    int she = b1 + b2 + b3;
    int cup1 = (cup + 4) / 5;
    int she1 = (she + 9) / 10;
    if (cup1 + she1 <= n) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}