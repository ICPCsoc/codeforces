#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    int b = 0, c = 0, x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == -1) {
            if (b > 0) b--;
            else c++;
        } else {
            b += x;
        }
    }
    cout << c << endl;
    return 0;
}
