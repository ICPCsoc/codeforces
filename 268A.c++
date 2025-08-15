#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    int b[100000];
    int c[100000];
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        cin >> c[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && b[i] == c[j]) {
                sum++;
            }
        }
    }
    cout << sum << endl;
    return 0;
}