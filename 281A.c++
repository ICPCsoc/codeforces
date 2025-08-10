#include "bits/stdc++.h"

using namespace std;

int main (void) {
    char a[1000];
    cin >> a;
    if (a[0] >= 'a' && a[0] <= 'z') {
        a[0] -= 32;
    }
    cout << a << endl;
    return 0;
}