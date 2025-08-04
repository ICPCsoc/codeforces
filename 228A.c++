#include "bits/stdc++.h"

using namespace std;

int main() {
    int s[4];
    cin >> s[0] >> s[1] >> s[2] >> s[3];
    int unique = 0;
    bool found;
    for (int i = 0; i < 4; i++) {
        found = false;
        for (int j = 0; j < i; j++) {
            if (s[i] == s[j]) {
                found = true;
                break;
            }
        }
        if (!found)
            unique++;
    }
    cout << 4 - unique << endl;
    return 0;
}