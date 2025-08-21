#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int a, b;
    cin >> a >> b;
    int d = min(a, b);
    if (d % 2 == 1) {
        cout << "Akshat" << endl;
    }
    else {
        cout << "Malvika" << endl;
    }
    return 0;
}