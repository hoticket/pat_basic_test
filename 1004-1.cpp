//
// Created by 10428 on 5/13/2023.
//
#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

struct Stu {
    string name;
    string id;
    unsigned int score;
    bool operator<(const Stu &s2) const {
        return score > s2.score;
    }
};
// https://stackoverflow.com/questions/37301160/invalid-operands-to-binary-expression-const-and-const
//bool StuCompare(Stu &s1, Stu &s2) {
//    return s1.score > s2.score;
//}

int main()
{
    int n; cin >> n;
    deque<Stu> res;
    while (n--) {
        Stu stu;
        cin >> stu.name >> stu.id >> stu.score;
        res.push_back(stu);
    }
//    sort(res.begin(), res.end(), StuCompare);
    sort(res.begin(), res.end());
    cout << res.front().name << " " << res.front().id << endl;
    cout << res.back().name << " " << res.back().id << endl;
    return 0;
}