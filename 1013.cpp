//
// Created by QH on 5/26/2023.
//
#include <iostream>
#include <vector>

using namespace std;

// 通过 prime.cpp 可以计算得出空间复杂度
// 要想得到第1e4个素数大概需要判断到第 1299600 个正整数
const int N = 1.3e6;
bool primes[N];
vector<int> ans;
unsigned short m,n;

/**
 * 埃筛法判断素数
 */
void prime() {
    for (int i = 2; i < N; ++i) {
        if (!primes[i] && ans.size() <= n) {
            ans.push_back(i);
            for(int j=2*i; j<N; j+=i) {
                primes[j] = true;
            }
        }
    }
}

int main() {
    unsigned short lc=0;
    cin >> m >> n;
    prime();
    for (int i = m-1; i < n; ++i) {
//        if (lc==10) {
//            cout << endl;
//            lc = 0;
//        } else {
//            if (lc != 0) {
//                cout << " ";
//            }
//        }
//        cout << ans[i];
//        lc++;
        lc++;
        cout << ans[i];
        if (i==n-1) continue;
        if (lc!=10) cout << " ";
        else lc=0,cout << endl;
    }
    cout << endl;
    return 0;
}