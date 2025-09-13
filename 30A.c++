#include "bits/stdc++.h"

using namespace std;

int main (void) {
    long long a, b; int n; cin >> a >> b >> n;
    if (a == 0) {
        if (b == 0) {
            cout << "0" << endl;
        }
        else {
            cout << "No solution" << endl;
        }
        return 0;
    }
     if (b % a != 0) { 
        cout << "No solution\n"; 
        return 0; 
    }
    long long c = b / a;
    long long root = round(pow(abs(c), 1.0 / n));

    for (long long x = root - 3; x <= root + 3; x++) {
        if (x == 0 && c != 0) continue;
        long long val = 1;
        for (int i = 0; i < n; i++) {
            val *= x;
        }
        if (val == c) {
            cout << x << "\n";
            return 0;
        }
    }

    cout << "No solution" << endl;
    return 0;
}