#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int a;
    cin >> a;
    int sum = 0;
    for (int i = 1; i < a; i++) {
        if ((a - i) % i == 0) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}