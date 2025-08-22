#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    int a1 = 0, g1 = 0;
    string sum = "";

    for (int i = 0; i < n; i++) {
        int a, g;
        cin >> a >> g;
        if (abs((a1 + a) - g1) <= 500) {
            a1 += a;
            sum += "A";
        } else {
            g1 += g;
            sum += "G";
        }
    }

    cout << sum << endl;
    return 0;
}