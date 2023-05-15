//
// Created by 10428 on 5/13/2023.
//
#include <iostream>
#include <string>

using namespace std;

string nameh,idh;
string namel,idl;
int scoreh=-1,scorel=999;

int main()
{
    int n; cin >> n;
    while (n--) {
        string name, id;
        int score;
        cin >> name >> id >> score;
        if (score > scoreh) {
            nameh = name;
            idh = id;
            scoreh = score;
        }
        if (score < scorel) {
            namel = name;
            idl = id;
            scorel = score;
        }
    }
    cout << nameh << " " << idh << endl;
    cout << namel << " " << idl << endl;
    return 0;
}