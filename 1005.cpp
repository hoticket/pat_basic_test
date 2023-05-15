//
// Created by QH on 2023/4/26.
//
#include <iostream>

using namespace std;

int main() {
    unsigned short int n; cin >> n;
    for (int i = 0; i < n; ++i) {

    }
    while (cin >>n) {
        while (n!=1) {
            if (n&1) n = 3 * n + 1, n /= 2;
            else n /= 2;
            cout << n << " ";
        }
        cout << endl;
    }
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