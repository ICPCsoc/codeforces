#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int n, x; 
    cin >> n >> x;
    int e = 7 - x;

    for (int i = 0; i < n; ++i) {
        int a, b; 
        cin >> a >> b;
        if (a == x || b == x || a == e || b == e) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}