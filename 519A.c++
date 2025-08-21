#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int a = 0, b = 0;
    for (int i = 0; i < 8; i++) {
        string sum1;
        cin >> sum1;
        for (int j = 0; j < 8; j++) {
            char c = sum1[j];
            int sum = 0;
            if (c == 'Q' || c == 'q') sum = 9;
            else if (c == 'R' || c == 'r') {
                sum = 5;
            }
            else if (c == 'B' || c == 'b') {
                sum = 3;
            }
            else if (c == 'N' || c == 'n') {
                sum = 3;
            }
            else if (c == 'P' || c == 'p') {
                sum = 1;
            }
            if (c >= 'A' && c <= 'Z') {
                a += sum;
            }
            else if (c >= 'a' && c <= 'z') {
                b += sum;
            }
        }
    }
    if (a > b) {
        cout << "White\n";
    }
    else if (b > a) {
        cout << "Black\n";
    }
    else {
        cout << "Draw\n";
    }
    return 0;
}