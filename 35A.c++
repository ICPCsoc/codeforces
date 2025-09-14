#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int a; cin >> a;
    int b = a;
    int t = 3;
    while (t--) {
        int c, d; cin >> c >> d;
        if (b == c || b == d) {
            if (b == c) {
                b = d;
            }
            else {
                b = c;
            }
        }
        else {
            continue;
        }
    }
    cout << b << endl;  
    return 0;
}