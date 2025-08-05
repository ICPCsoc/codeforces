#include "bits/stdc++.h"
#include <iomanip>

using namespace std;

int main (void) {
    int n;
    cin >> n;
    int p[1000];
    for (int i = 0; i< n; i++) {
        cin >> p[i];
    }

    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += p[i];
    }
    sum = sum / n;
    cout << fixed << setprecision(7) << sum << endl;
}