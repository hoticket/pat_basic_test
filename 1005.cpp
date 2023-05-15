//
// Created by QH on 2023/4/26.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const int N=1e4;

bool Compare(int &v1, int &v2) {
    return v1 > v2;
}

int main() {
    unsigned short int n; cin >> n;
    int inArr[n];
    bool resArr[N];
    vector<int> result;
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
            result.push_back(inArr[i]);
        }
    }
    sort(result.begin(), result.end(), Compare);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i!=result.size()-1) {
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