//
// Created by QH on 5/26/2023.
// 在 pat 上执行，这种方式会导致内存超限
//
#include <iostream>
#include <string>

const int N = 1e8;
// 100000000
bool primes[N];

using namespace std;

/**
 * 埃筛法判断素数
 * 合数：true  素数：false
 */
void prime() {
    for (int i = 2; i < N; ++i) {
        if (!primes[i]) {
            for (int j = 2 * i; j < N; j += i) {
                primes[j] = true;
            }
        }
    }
}

int main() {
    string s;
    cin >> s;
    prime();
    bool contains_no;
    for (int i = 0; i < s.size(); i++) {
        string subs = s.substr(i);
        cout << subs << " ";
        if (!primes[stoi(subs)]) {
            cout << "Yes" << endl;
        } else {
            contains_no = true;
            cout << "No" << endl;
        }
    }
    if (!contains_no) {
        cout << "All Prime!" << endl;
    }
    return 0;
}