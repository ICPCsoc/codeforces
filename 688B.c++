#include "bits/stdc++.h"

using namespace std;

int main (void) {
    string s;
    cin >> s;
    string rev = s;
    reverse(rev.begin(), rev.end());
    cout << s + rev << endl;
    return 0;
}