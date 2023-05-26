//
// Created by QH on 5/26/2023.
// 如果要获取第n个素数，那么需要判断的最大自然数是多少
//
#include <iostream>
#include <cmath>

using namespace std;

int maxNum;

bool isPrime(unsigned int x) {
    for (int i = 2; i <= sqrt(x); i++) {
        if (x%i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, m = 0; cin >> n;
    for (int i = 2; m<n; ++i) {
        if (isPrime(i)) {
            maxNum = i;
            m++;
        }
    }
    cout << maxNum;
    return 0;
}