//
// Created by QH on 5/16/2023.
//
#include <iostream>
#include <deque>

using namespace std;

int main() {
    int n, m;
    cin >> n>> m;
    deque<int> d1;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        d1.push_back(x);
    }
    while (m--) {
        int tmp = d1.back();
        d1.pop_back();
        d1.push_front(tmp);
    }
    for (auto it = d1.begin(); it != d1.end(); ++it) {
        cout << *it;
        if (it+1!=d1.end()) {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}