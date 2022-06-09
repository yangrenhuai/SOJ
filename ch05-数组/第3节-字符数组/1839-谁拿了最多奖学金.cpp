//
// Created by 杨仁怀 on 2022-05-28.
//

#include <iostream>
#include "cstring"
using namespace std;

int main() {
    int c;
    cin >> c;
    string name[101]; // 存储学生姓名
    char n, m; // n学生干部, m西部省份学生
    int x, y, z, money[101], max_money = 0, s_money = 0; // s_money所有同学的奖学金
    memset(money, 0, sizeof(money));
    for (int i = 0; i < c; i++) {
        cin >> name[i] >> x >> y >> n >> m >> z;
        if (x > 80 && z >= 1)money[i] += 8000;
        if (x > 85 && y > 80)money[i] += 4000;
        if (x > 90)money[i] += 2000;
        if (x > 85 && m == 'Y')money[i] += 1000;
        if (y > 80 && n == 'Y')money[i] += 850;
        if (money[i] > max_money)
            max_money = money[i];
        s_money += money[i];
    }

    // 找到奖学金最多的学生，输出学生姓名、奖学金和所有同学的奖学金
    for (int i = 0; i < c; i++)
        if (max_money == money[i]) {
            cout << name[i] << endl << max_money << endl << s_money << endl;
            break;
        }
    return 0;
}