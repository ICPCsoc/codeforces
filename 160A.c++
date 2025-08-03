#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    int a[1000];
    int sum = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] < a [j+1]){
                int b = a[j];
                a[j] = a[j+1];
                a[j+1] = b;
            }
        }
    }
    int sum2 = 0;
    int sum3 = 0;
    for (int i = 0; i < n; i++) {
        sum2 += a[i];
        sum3++;
        if (sum2 > sum - sum2) {
            break;
        }
    }
    cout << sum3 << endl;
    return 0;
}