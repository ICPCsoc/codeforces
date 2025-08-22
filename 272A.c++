#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    int sum = 0;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
    }
    int sum1 = 0;
    for (int i = 1; i <= 5; i++) {
        int b = sum + i;
        int a = (b - 1) % (n + 1) + 1;
        if (a != 1) {
            sum1++;
        }
    }
    cout << sum1 << endl;
    return 0;
}