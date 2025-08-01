#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int k, n, w;
    cin >> k >> n >> w;
    int sum = 0;
    for (int i = 1; i <= w; i++){
        sum += i*k;
    }
    int sum1 = sum - n;
    if (sum1 < 0){
        sum1 = 0;
    }
    cout << sum1 << endl;
    return 0;
}