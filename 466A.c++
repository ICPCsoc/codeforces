#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int x = n / m;
    int y = n % m;
    int z = x * b + y * a;
    int c = (x + 1) * b;
    int d = n * a;
    cout << min(z, min(c, d)) << endl;
    return 0;
}