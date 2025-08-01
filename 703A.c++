#include <iostream>

using namespace std;

typedef long long ll;
int main (void) {
    ll n;
    ll mi, ci;
    ll sum1 = 0, sum2 = 0, sum = 0;
    cin >> n;
    for (ll i = 1; i <= n; i++) {
        cin >> mi;
        cin >> ci;
        if (mi > ci) {
            sum1++;
        }
        else if (mi < ci) {
            sum2++;
        }
        else if (mi == ci) {
            sum++;
        }
    }
    if (sum == n || sum1 == sum2) {
        cout << "Friendship is magic! ^^" << endl;
    } 
    else if (sum1 > sum2) {
        cout << "Mishka" << endl;
    }
    else {
        cout << "Chris" << endl;
    }
    return 0;
}
