#include <iostream>
using namespace std;

int main (void) {
    long long n, k;
    cin >> n >> k;
    long long a = (n + 1) / 2;
    if (k <= a) {
        cout << 2 * k - 1 << endl;
    } else {
        cout << 2 * (k - a) << endl;
    }
    return 0;
}
