#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int a;
    cin >> a;
    int sum = 0;
    for (int i = 1; i <= a; i++){
        int p, v, t;
        cin >> p >> v >> t;
        if ((p == 1 && v == 1) || (t == 1 && v == 1) || (p == 1 && t == 1) || (p == 1 && v == 1 && t == 1)) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}