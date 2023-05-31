//
// Created by QH on 5/31/2023.
//
#include <iostream>
#include <string>
#include <map>

using namespace std;

void check(string &_s, map<char,int> &map) {
    for (char s:_s) {
        if (!map[s]) {
            cout << s;
            map[s] = 1;
        }
    }
}

int main() {
    string s1,s2;
    map<char,int> map;
    getline(cin, s1);
    getline(cin, s2);
    check(s1, map);
    check(s2, map);
    cout << endl;
    return 0;
}