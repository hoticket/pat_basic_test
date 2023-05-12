//
// Created by QH on 2023/4/26.
//
#include <iostream>

using namespace std;

int main() {
    unsigned short int n, loop = 0;
    cin >> n;
    if (n==0) return 0;
    while (n!=1) {
        if (n%2 == 0) {
            n = n / 2;
        }else {
            n = (3 * n + 1)/2;
        }
        loop++;
    }
    cout << loop << endl;
    return 0;
}