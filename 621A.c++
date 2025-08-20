#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    long long a;
    long long sum1 = 1e18;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        sum += a;
        if (a % 2 == 1) {
            sum1 = min(a, sum1);
        }
    }
    if (sum % 2 == 0) {
        cout << sum << endl;
    }
    else {
        cout << sum - sum1 << endl;
    }
    return 0;
}