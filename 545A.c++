#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    int a[1000][1000];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int stat = 0;
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 1 || a[i][j] == 3) {
                stat = 1;
                break;
            }
        }
        if (stat == 0) {
            sum++;
        }
    }
    cout << sum << endl;
    for (int i = 0; i < n; i++) {
        int stat = 0;
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 1 || a[i][j] == 3) {
                stat = 1;
                break;
            }
        }
        if (stat == 0) {
            cout << i + 1 << " ";
        }
    }
    cout << endl;
    return 0;
}