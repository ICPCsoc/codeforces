#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n, m;
    cin >> n >> m;
    int a[1000000];
    for (int i = 0; i < m; i++){
        cin >> a[i];
    }
    int b = 1;
    long long c = 0;
    for (int i = 0; i < m; i++) {
        if (a[i] >= b){
            c += a[i] - b;
        }
        else{
            c += (n - b) + a[i];
        }
        b = a[i];
    }
    cout << c << endl;
    return 0;
}