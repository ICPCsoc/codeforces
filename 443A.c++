#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int b[26];
    for (int i = 0; i < 26; i++) {
        b[i] = 0;
    }
    char a;
    cin >> a;
    while (true) {
        cin >> a;
        if (a == '}') {
            break;
        }
        else if (a >= 'a' && a <= 'z') {
            b[a - 'a'] = 1;
        }
    }
    int sum = 0;
    for (int i = 0; i < 26; i++) {
        if (b[i] == 1) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}