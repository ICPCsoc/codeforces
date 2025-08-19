#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int a = k * l;
    int b = a / (n * nl);
    int r = c * d;
    int t = r / n;
    int e = p / (n * np);
    int f = min(b, min (t, e));
    cout << f << endl;
    return 0;
}