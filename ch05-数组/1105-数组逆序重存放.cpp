/*
【题目描述】
将一个数组中的值按逆序重新存放。例如，原来的顺序为8,6,5,4,1。要求改为1,4,5,6,8。

【输入】
两行：第一行数组中元素的个数n（1<n<100)，第二行是n个整数，每两个整数之间用空格分隔。

【输出】
一行：输出逆序后数组的整数，每两个整数之间用空格分隔。

【输入样例】
5
8 6 5 4 1
【输出样例】
1 4 5 6 8
 * */

#include <bits/stdc++.h>

using namespace std;

int a[100];
int n;
int main() {
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<n/2;i++){
        int t;
        t=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=t;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
