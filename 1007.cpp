//
// Created by QH on 5/16/2023.
//
#include <iostream>

using namespace std;

bool isPrime(unsigned int x) {
    for (int i = 2; i*i <= x; i++) {
        if (x%i == 0) {
            return false;
        }
    }
    return true;
}
unsigned int ans;
int main() {
    unsigned int n; cin >> n;
    for (unsigned int i = 2; i <= n; ++i) {
        if (isPrime(i) && (i+2) <= n && isPrime(i+2)) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}