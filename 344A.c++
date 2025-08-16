#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    int a[1000];
    int sum1 = 1;
    for (int i = 0; i< n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] != a[i + 1]) { 
            sum1++;
        }
    }
    cout << sum1 <<endl;
    return 0;
}