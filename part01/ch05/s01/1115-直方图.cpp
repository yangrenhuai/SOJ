/*
【题目描述】
给定一个非负整数数组，统计里面每一个数的出现次数。我们只统计到数组里最大的数。

假设 Fmax（Fmax<10000）是数组里最大的数，那么我们只统计{0,1,2.....Fmax}里每个数出现的次数。

【输入】
第一行n是数组的大小。1≤n≤10000。

紧接着一行是数组的n个元素。

【输出】
按顺序输出每个数的出现次数，一行一个数。如果没有出现过，则输出0。

对于例子中的数组，最大的数是3，因此我们只统计{0,1,2,3}的出现频数。

【输入样例】
5
1 1 2 3 1
【输出样例】
0
3
1
1
*/


#include <bits/stdc++.h>
using namespace std;

int a[10001],maxn,n;
int main() {
    cin >> n;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        a[x]++; //记录x出现的次数
        if(maxn<x) maxn=x; //边输入，边求最大数
    }

    //注意：要输出数字0出现的次数。a[0]保存的就是0出现的次数
    for(int i=0;i<=maxn;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
