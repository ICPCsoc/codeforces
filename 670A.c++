#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int weeks = n / 7;
    int extra = n % 7;

    int min_days = weeks * 2;
    int max_days = weeks * 2;

    // Tính ngày nghỉ tối đa
    if (extra >= 2)
        max_days += 2;
    else
        max_days += extra;

    // Tính ngày nghỉ tối thiểu
    if (extra > 5)
        min_days += extra - 5;

    cout << min_days << " " << max_days << endl;

    return 0;
}
