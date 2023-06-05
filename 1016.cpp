//
// Created by QH on 6/5/2023.
//
#include <iostream>
#include <string>

using namespace std;

int calc(string &s, char &i) {
    string r;
    for (char j : s) {
        if (j == i) {
            r += j;
        }
    }
    if (r.empty()) return 0;
    return stoi(r);
}

int main() {
    string A, B;
    char a, b;
    cin >> A >> a >> B >> b;
    cout << calc(A, a) + calc(B, b) << endl;
    return 0;
}