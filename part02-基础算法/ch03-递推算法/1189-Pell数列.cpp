/*
【题目描述】
Pell数列a1,a2,a3,...的定义是这样的，a1=1,a2=2,...,an=2an−1+an−2(n>2)。
给出一个正整数k，要求Pell数列的第k项模上32767是多少。
【输入】
第1行是测试数据的组数n，后面跟着n行输入。每组测试数据占1行，包括一个正整数k (1≤k<1000000)。
【输出】
n行，每行输出对应一个输入。输出应是一个非负整数。
【输入样例】
2
1
8
【输出样例】
1
408
*/
#include <bits/stdc++.h>

using namespace std;

long long a[1000001],n,b;
int main(){
    cin>>n;

    a[1]=1;
    a[2]=2;
    for(int i=3;i<=1000000;i++){
        a[i]=(a[i-2]+2*a[i-1])%32767;
    }

    while(n--){
        cin>>b;
        cout<<a[b]<<endl;
    }
    return 0;
}
