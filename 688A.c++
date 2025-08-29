#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n, d;
    cin >> n >> d;
    int sum = 0;
    int sum1 = 0;
    for (int i = 0; i < d; i++) {
        string s;
        cin >> s;
        bool b = false;
        for (char c : s) {
            if (c == '1') {
                b = true;
                break;
            }
        }
        if (b) {
            sum = 0;
        } else {
            sum++;
            sum1 = max(sum1, sum);
        }
    }
    cout << sum1 << endl;
    return 0;
}