#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int a, sum = 0;
    cin >> a;
    for (int i = 0; i < 0; i++) {
        sum += (i + 1) * (a - i) - a;
    }
    cout << sum << endl;
    return 0;
}