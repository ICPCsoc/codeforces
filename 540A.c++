#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    char a[1000000];
    char b[1000000];
    cin >> a;
    cin >> b;
    int sum = 0;
    for (int i = 0; a[i] != '\0'; i++) {
        int c = a[i] - '0';
        int d = b[i] - '0';
        int e = abs(c - d);
        sum += min(e, 10 - e);
    }
    cout << sum << endl;
    return 0;
}