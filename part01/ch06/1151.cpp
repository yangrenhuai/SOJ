/*
1151：素数个数

【题目描述】
编程求2∼n(n为大于2的正整数)中有多少个素数。

【输入】
输入n(2≤n≤50000)。

【输出】
素数个数。

【输入样例】
10
【输出样例】
4
*/


#include <iostream>
#include "cmath"
using namespace std;

bool f(int x){
    if(x==2) return true;
    int i=2;
    for(;i<=sqrt(x);i++){
        if(x%i==0) return false;
    }
    if(i>(int)sqrt(x)) return true;
    return false;
}

int main() {
    int n,sum=0;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(f(i)) sum++;
    }
    cout<< sum;
    return 0;
}