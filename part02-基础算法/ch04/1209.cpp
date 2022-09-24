/*
1209：分数求和
【题目描述】
输入n个分数并对他们求和，并用最简形式表示。
 所谓最简形式是指：分子分母的最大公约数为1；
 若最终结果的分母为1，则直接用整数表示。
如：56、103均是最简形式，而36需要化简为12,31需要化简为3。
分子和分母均不为0，也不为负数。
【输入】
第一行是一个整数n，表示分数个数，1≤n≤10；
接下来n行，每行一个分数，用"p/q"的形式表示，不含空格，p，q均不超过10。
【输出】
输出只有一行，即最终结果的最简形式。若为分数，用"p/q"的形式表示。
【输入样例】
2
1/2
1/3
【输出样例】
5/6
*/

#include "iostream"

using namespace std;

int gcd(int a, int b) {
    if (a < b) swap(a, b); // a 始终保存最大的数据
    if (a % b == 0) return b;
    else
        return gcd(b, a % b);
//    return (b == 0 ? a : gcd(b, a % b));
}

int main() {
    int n; // n个分数
    int fenzi1, fenmu1, fenzi2, fenmu2; // 接收分子和分母
    int p, q; // 相加后的分子p，相加后的分母q
    char ch;//接收 1/2中间的/
    cin >> n;
    cin >> fenzi1 >> ch >> fenmu1;
    for (int i = 1; i <= n - 1; i++) {
        cin >> fenzi2 >> ch >> fenmu2;

        p = fenzi1 * fenmu2 + fenzi2 * fenmu1;   //计算分子
        q = fenmu1 * fenmu2;  // 计算分母

        int x = gcd(p, q);
        fenzi1 = p / x; //约分
        fenmu1 = q / x;
    }
    if (fenmu1 == 1) cout << fenzi1;
    else cout << fenzi1 << "/" << fenmu1 << endl;

    return 0;
}