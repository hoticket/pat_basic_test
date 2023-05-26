//
// Created by QH on 5/26/2023.
//
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

/**
 * 是否素数
 *
 * @param s
 * @return
 */
bool isPrime(string &s) {
    int st = stoi(s);
    // 这里要注意 i 最小为 2
    if (st<2) {
        return false;
    }
    for (int i = 2; i <= sqrt(st); ++i) {
        if (st%i==0) {
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    // 这里声明的时候要初始化，不然pat测试用例会报错
    bool contains_no = false;
//    for (unsigned int i = 0; i < s.size(); i++) {
    for (string::size_type i = 0; i < s.size(); i++) {
        string subs = s.substr(i);
        cout << subs << " ";
        if (isPrime(subs)) {
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