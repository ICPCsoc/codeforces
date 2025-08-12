#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    char a[1000];
    cin >> a;
    int b [26] = {0};
    for (int i = 0; i < n; i++) {
        if (a[i] >= 'A' && a[i] <= 'Z') {
            a[i] += 32;
        }
        if (a[i] >= 'a' && a[i] <= 'z') {
            b[a[i] - 'a'] = 1;
        }
    }
    int sum = 0;
    for (int i = 0; i < 26; i++) {
        if (b[i] == 1) {
            sum++;
        }
    }
    if (sum == 26) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}