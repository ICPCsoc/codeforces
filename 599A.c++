#include "bits/stdc++.h"

using namespace std;

int main (void) {
    long long d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    long long a = min({2 * (d1 + d2), d1 + d2 + d3, 2 * (d1 + d3), 2 * (d2 + d3) });
    cout << a << endl;
    return 0;
}