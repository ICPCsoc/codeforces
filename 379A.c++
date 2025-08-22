#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = a;
    while (sum3 > 0) {
        sum1 += sum3;
        sum2 += sum3;
        sum3 = sum2 / b;
        sum2 = sum2 % b;
    }
    cout << sum1 << endl;
    return 0;
}