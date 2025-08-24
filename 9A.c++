#include "bits/stdc++.h"

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(void) {
    int y, w;
    cin >> y >> w;
    int m = max(y, w);
    int num = 6 - m + 1; // tử số
    int den = 6;         // mẫu số
    int g = gcd(num, den);
    cout << num / g << "/" << den / g << endl;
    return 0;
}
