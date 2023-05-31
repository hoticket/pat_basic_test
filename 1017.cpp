//
// Created by QH on 5/31/2023.
// https://zhuanlan.zhihu.com/p/275011916
//
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> div(vector<int> &A, int b, int &r) {
    vector<int> C;
    r = 0;
    for (int i=A.size()-1;i>=0;i--) {
        r = r*10+A[i];
        C.push_back(r / b);
        r %=b;
    }
    reverse(C.begin(), C.end());
    while (C.size()>1&&C.back()==0) C.pop_back();
    return C;
}

int main() {

    vector<int> av;
    // 123456789050987654321
    string a;
    int b;
    cin >> a >> b;
    for (int i=a.size()-1; i >= 0;i--) {
        av.push_back(a[i] - '0');
    }
    int r;
    auto C = div(av, b, r);
    for (int i = C.size()-1; i >=0 ; i--) {
        cout << C[i];
    }
    cout << " " << r << endl;

    return 0;
}

