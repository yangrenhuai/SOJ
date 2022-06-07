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

int a[1001],n,m;//n个人
int cnt;//记录还在队列中的人数
int number;//记录报数
int main() {
    cin>>n>>m;
    cnt=n;//初始，队列中有n个人

    for(int i=1;i<=n;i++) a[i]=1;//表示所有人都在队列中

    a[m]=0;//把第m个人移出队列
    cnt--;
    cout << m << " ";

    int i=m+1;//记录数组的游标
    while(cnt>0){
        if(a[i]>0) {
            number++;
            if(number==m){
                a[i]=0; //移出队列
                cnt--;
                cout<<i<<" ";
                number=0; //重新开始计数
            }
        }

        i++;//指针下移
        if(i>n) i=1; // 指针从头开始
    }
    return 0;
}
