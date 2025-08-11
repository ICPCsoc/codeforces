#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    int a[1000];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] != 0) {
            sum++;
        }
    }
    if (sum > 0) {
        cout << "HARD" << endl;
    }
    else {
        cout << "EASY" << endl;
    }
    return 0;
}