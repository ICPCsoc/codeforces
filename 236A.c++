#include "bits/stdc++.h"

using namespace std;

int main (void) {
    char a[1000];
    cin >> a;
    int b[26];
    int sum = 0;
    for (int i = 0; i < 26; i++) {
        b[i] = 0;
    }
    for (int  i = 0; a[i] != '\0'; i++) {
        int c = a[i] - 'a';
        if (b[c] == 0) {
            b[c] = 1;
            sum++;
        }
    }
    if (sum % 2 == 0) {
        cout << "CHAT WITH HER!";
    }
    else {
        cout << "IGNORE HIM!";
    }
    cout << endl;
    return 0;
}