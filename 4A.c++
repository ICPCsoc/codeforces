#include "bits/stdc++.h" 

using namespace std;

int main (void) {
    int a;
    cin >> a;
    if (a < 0) {
        cout << "NO";
    }
    else {
        if (a % 2 == 0 && a > 2) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    }
    return 0;
}