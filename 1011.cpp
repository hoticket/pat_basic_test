//
// Created by QH on 6/5/2023.
//
#include <iostream>

using namespace std;

typedef long long int ll;

int main() {
    short t; cin >> t;
    for (short i = 1; i <= t; ++i) {
        ll a,b,c; cin >> a >> b >> c;
        printf("Case #%d: ", i);
        a + b > c ? puts("true") : puts("false");
    }
    return 0;
}