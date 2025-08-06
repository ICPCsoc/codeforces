#include "bits/stdc++.h" 

using namespace std;
int main (void) {
    int n, m;
    cin >> n >> m;
    int a[1000];
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m - i -1; i++) {
            if (a[j] < a [j+1]){
                int b = a[j];
                a[j] = a[j+1];
                a[j+1] = b;
            }
        }
    }      
    return 0;
}