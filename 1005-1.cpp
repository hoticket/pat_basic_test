//
// Created by QH on 2023/4/26.
//
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;
const int N=1e4;

class Compare{
public:
    bool operator()(const int &v1, const int &v2) const {
        return v1 > v2;
    }
};

int main() {
    unsigned short int n; cin >> n;
    int inArr[n];
    bool resArr[N];
    set<int, Compare> result;
    for (int i = 0; i < n; ++i) {
        cin >> inArr[i];
        int x = inArr[i];
        while (x != 1) {
            if (x&1) x=x*3+1, x/=2;
            else x/=2;
            resArr[x]= true;
        }
    }
    for (int i = 0; i < n; ++i) {
        if (!resArr[inArr[i]]) {
            result.insert(inArr[i]);
        }
    }
    for (auto it = result.begin(); it != result.end(); ++it) {
        cout << *it;
        if (distance(it, result.end()) != 1) {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}

//int main() {
//    unsigned short int n;
//    while (cin >>n) {
//        while (n!=1) {
//            if (n&1) n = 3 * n + 1, n /= 2;
//            else n /= 2;
//            cout << n << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}