#include "bits/stdc++.h"

using namespace std;

typedef long long ll;
int main (void) {
    int n, m, a;
    cin >> n >> m >> a;
    ll n1 = (n + a - 1) / a;
    ll m1 = (m + a - 1) / a;
    cout << n1 * m1 << endl;
    return 0;
}