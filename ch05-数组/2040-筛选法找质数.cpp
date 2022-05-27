/*
【题目描述】
用筛法求出n(2≤n≤1000)以内的全部质数。

【输入】
输入n。

【输出】
多行，由小到大的质数。

【输入样例】
10
【输出样例】
2
3
5
7
*/

#include <iostream>
#include <cmath>

using namespace std;
int n;
int main() {
    cin >> n;

    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout << i << endl;
        }
    }
    return 0;
}
