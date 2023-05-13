//
// Created by 10428 on 5/13/2023.
//
#include <iostream>
#include <string>

using namespace std;

string a[15] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

int main()
{
    string s; cin >> s;
    int sum;
    for (int i = 0; i < s.size(); ++i) {
        sum += s[i] - '0';
    }
    string sumStr = to_string(sum);
    for (int i = 0; i < sumStr.size(); ++i) {
        cout << a[sumStr[i] - '0'];
        if (i != sumStr.size()-1) {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}