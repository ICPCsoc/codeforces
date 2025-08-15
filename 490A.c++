#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int a; 
    cin >> a;
    int b[5000], c[5000], d[5000];
    int e = 0, f = 0, g = 0;
    for (int j = 0; j < a; j++) {
        int i; 
        cin >> i;
        if (i == 1) {
            b[e++] = j + 1;
        } 
        else if (i == 2) {
            c[f++] = j + 1;
        } 
        else {
            d[g++] = j + 1;
        }
    }
    int h = e;
    if (f < h) {
        h = f;
    }
    if (g < h) {
        h = g;
    }
    cout << h << "\n";
    for (int j = 0; j < h; j++) {
        cout << b[j] << " " << c[j] << " " << d[j] << "\n";
    }
    return 0;
}
