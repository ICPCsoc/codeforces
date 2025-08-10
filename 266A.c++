#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    char a[1000];
    for (int i = 0;i < n; i++) {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == a[i - 1]){
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}