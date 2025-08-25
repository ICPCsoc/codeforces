#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    string s;
    cin >> n >> s;
    int sum = 0;
    for (int i = 0; i < n ; i++) {
        int a = s[i] - '0';
        if (a % 2 == 0) {
            sum += (i + 1);
        }
    }
    cout << sum << endl;
    return 0;
}