//
// Created by QH on 5/31/2023.
//
#include <iostream>
#include <string>

using namespace std;

bool isPrime(int &num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2;i*i <= num;i++) {
        if (num%i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int l,k; cin >> l >> k;
    string s; cin >> s;
    int i = 0;
    while (i <= l-k) {
        string sub = s.substr(i, k);
        int subi = stoi(sub);
        if (isPrime(subi)) {
            cout << sub;
            return 0;
        }
        i++;
    }
    cout << 404;
    return 0;
}