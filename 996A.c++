#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    int sum =(n / 100) + ((n % 100) / 20) + ((n % 20) / 10) + ((n % 10) / 5) + (n % 5);
    cout << sum << endl;
    return 0;
}