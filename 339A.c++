#include "bits/stdc++.h"

using namespace std;

int main() {
    char s[105];
    cin >> s;
    int count1 = 0, count2 = 0, count3 = 0;
    for (int i = 0; s[i] != '\0'; i += 2) {
        if (s[i] == '1') {
            count1++;
        }
        else if (s[i] == '2') {
            count2++;
        }
        else if (s[i] == '3') {
            count3++;
        }
    }
    int total = count1 + count2 + count3;
    int printed = 0;
    for (int i = 0; i < count1; i++) {
        cout << "1";
        printed++;
        if (printed < total) {
            cout << "+";
        }
    }
    for (int i = 0; i < count2; i++) {
        cout << "2";
        printed++;
        if (printed < total) {
            cout << "+";
        }
    }
    for (int i = 0; i < count3; i++) {
        cout << "3";
        printed++;
        if (printed < total) {
            cout << "+";
        }
    }
    cout << endl;
    return 0;
}