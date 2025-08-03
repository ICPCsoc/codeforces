#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n, k;
    cin >> n >> k;
    int a[50];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int score = a[k - 1];
    for (int i = 0; i < n; i++) {
        if (a[i] >= score && a[i] > 0) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}