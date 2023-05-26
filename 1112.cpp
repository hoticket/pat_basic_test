//
// Created by QH on 5/26/2023.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    unsigned short n, t;
    cin >> n >> t;
    vector<unsigned short> vc(n);
    for (unsigned short i = 0; i < n; i++) {
        cin >> vc[i];
    }
    unsigned short max_no = 0;
    bool has_section = false;   // 是否存在超标区间

    unsigned short i = 0;
    while (i < n) {
        max_no = max(max_no, vc[i]);
        if (vc[i] <= t) {
            i++;
            continue;
        }
        // 存在超标区间
        unsigned short j = i;
        while (j < n && vc[j] > t) {
            j++;
        }
        printf("[%d, %d]\n", i, j-1);
        has_section = true;
        i=j;
    }

    if (!has_section) {
        cout << max_no << endl;
    }

    return 0;
}