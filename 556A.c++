#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sum2 = 0;
    int sum1 = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            sum1++;
        }
        else if (s[i] == '1') {
            sum2++;
        }
    }
    cout << abs(sum1 - sum2) << endl;
    return 0;
}