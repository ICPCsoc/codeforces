#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    char a[5];
    int x = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if ((a[0] == '+' && a[1] == '+') || (a[1] == '+' && a[2] == '+')) {
            x++;
        }
        else {
            x--;
        }
    }
    cout << x << endl;
    return 0;
}