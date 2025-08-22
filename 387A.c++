#include "bits/stdc++.h"

using namespace std;

int main (void) {
    string s, t;
    cin >> s >> t;
    int a = (s[0]-'0')*10 + (s[1]-'0');
    int b = (s[3]-'0')*10 + (s[4]-'0');
    int a1 = (t[0]-'0')*10 + (t[1]-'0');
    int b1 = (t[3]-'0')*10 + (t[4]-'0');
    int s1 = a*60 + b;
    int s2 = a1*60 + b1;
    int s3 = s1 - s2;
    if (s3 < 0) s3 += 24*60;
    int s5 = s3 / 60;
    int s4 = s3 % 60;
    if (s5 < 10) cout << "0";
    cout << s5 << ":";
    if (s4 < 10) cout << "0";
    cout << s4 << "\n";
    return 0;
}