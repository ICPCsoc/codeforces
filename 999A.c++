#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    int a;
    cin >> a;
    int b[10000000];
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int c = 0;
    int d = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] <= a) {
            c++;
        }
        else if (b[i] > a) {
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (b[i] <= a) {
            d++;
        }
        else if (b[i] > a) {
            break;
        }
    }
    int sum = d + c;
    if (sum > n) {
        sum = n;
    }
    cout << sum << endl;
    return 0;
}