//
// Created by QH on 5/26/2023.
//
#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>

using namespace std;

map<string, int> mp;

bool check(char buff[]) {
    int n = strlen(buff);
    int i = 0, j = n - 1;
    while (i < j) {
        if (buff[i] != buff[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    int n; cin >> n;
    mp["Jan"] = 1;
    mp["Feb"] = 2;
    mp["Mar"] = 3;
    mp["Apr"] = 4;
    mp["May"] = 5;
    mp["Jun"] = 6;
    mp["Jul"] = 7;
    mp["Aug"] = 8;
    mp["Sep"] = 9;
    mp["Oct"] = 10;
    mp["Nov"] = 11;
    mp["Dec"] = 12;
    for (int i = 0; i < n; i++) {
        string month;
        string day;
        int year;
        cin >> month >> day >> year;
        day.pop_back();
        char buff[128];
        sprintf(buff, "%04d%02d%02d", year, mp[month], stoi(day));
        if (check(buff)) {
            cout << "Y" << " ";
        } else {
            cout << "N" << " ";
        }
        puts(buff);
    }
    return 0;
}