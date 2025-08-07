#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    char a[100];
    for (int i = 0; i < n; i++) {
        cin >> a;
        int len = 0;
        while (a[len] != '\0') {
            len++;
        }
        if (len > 10) {
            cout << a[0] << (len - 2) << a[len - 1] << endl;
        }
        else {
            cout << a << endl;
        }
    }
    return 0;
}