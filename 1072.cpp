//
// Created by QH on 6/5/2023.
//
#include <iostream>
#include <map>
#include <string>

using namespace std;
int a,b;
int main() {
    int n,m; cin >> n >> m;
    map<string, int> map;
    string s;
    for (int i = 0; i < m; ++i) {
        // 读入违禁品
        cin >> s;
        map[s]++;
    }
    for (int i = 0; i < n; ++i) {
        // 读入学生信息
        int t;
        bool flag = false;
        string ans;
        cin >> s >> t;
        ans = s+":";
        for (int j = 0; j < t; ++j) {
            cin >> s;
            if (map[s]) {
                ans += " " + s;
                b++;
                flag = true;
            }
        }
        if (flag) {
            a++;
            cout << ans << endl;
        }
    }
    cout << a << " " << b << endl;
    return 0;
}