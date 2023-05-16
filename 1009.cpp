//
// Created by QH on 5/16/2023.
//
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    string s,x;
    vector<string> ans;
    getline(cin, s);
    stringstream l(s);
    while (l>>x) {
        ans.push_back(x);
    }
    // 迭代方式1
    for (auto it = ans.rbegin();it!=ans.rend();++it) {
        cout << *it;
        if (it+1!=ans.rend()) {
            cout << " ";
        }
    }
    // 循环方式2
//    for (int i = ans.size()-1; i>=0; i--) {
//        cout << ans[i];
//        if (i!=0) {
//            cout << " ";
//        }
//    }
    cout << endl;
    return 0;
}