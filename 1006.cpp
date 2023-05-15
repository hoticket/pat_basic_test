//
// Created by 10428 on 5/15/2023.
//
#include <iostream>

using namespace std;

int main() {
    unsigned short i, b, s, g;
    cin >> i;
    b = i / 100;
    s = (i%100)/10;
    g = i %10;
    for (int j = 0; j < b; ++j) {
        cout << "B";
    }
    for (int j = 0; j < s; ++j) {
        cout << "S";
    }
    for (int j = 1; j <= g; ++j) {
        cout << j;
    }
    cout << endl;
    return 0;
}