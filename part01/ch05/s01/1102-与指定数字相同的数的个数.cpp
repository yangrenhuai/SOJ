/*
【题目描述】
输出一个整数序列中与指定数字相同的数的个数。

【输入】
输入包含三行：
第一行为n，表示整数序列的长度(n≤100)；
第二行为n个整数，整数之间以一个空格分开；
第三行包含一个整数，为指定的数字m。

【输出】
输出为n个数中与m相同的数的个数。

【输入样例】
3
2 3 2
2
【输出样例】
2
*/


#include <bits/stdc++.h>

using namespace std;

int n,m,cnt=0;
int a[101];
int main() {
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cin>>m;
    for(int i=0;i<n;i++){
        if(a[i]==m) cnt++;
    }

    cout<<cnt<<endl;
    return 0;
}
