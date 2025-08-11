#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n, h;
    cin >> n >> h;
    int a[1000];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] <= h) {
            sum++;
        }
        else {
            sum += 2;
        }
    }
    cout << sum << endl;
    return 0;
}