/*
【题目描述】
N个人围成一圈，从第一个人开始报数，数到M的人出圈；再由下一个人开始报数，数到M的人出圈；…输出依次出圈的人的编号。

【输入】
输入N和M。

【输出】
输出一行，依次出圈的人的编号。

【输入样例】
8 5
【输出样例】
5 2 8 7 1 4 6 3
【提示】
【数据范围】

对于所有数据，2≤N,M≤1000。
*/


#include <iostream>
using namespace std;

int a[1000],n,m;
int main() {
    cin>>n>>m;

    a[0]=m;
    for(int i=1;i<n;i++){
        int x=[i-1]+m;
        if()
    }
    return 0;
}
