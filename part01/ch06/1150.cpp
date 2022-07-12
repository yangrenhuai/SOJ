/*
1150：求正整数2和n之间的完全数
【题目描述】
求正整数2和n之间的完全数(一行一个数)。
完全数：因子之和等于它本身的自然数，如6=1+2+3
【输入】
输入n(n≤5000)。
【输出】
一行一个数,按由小到大的顺序。
【输入样例】
 7
【输出样例】
6
*/

#include <iostream>
#include <cmath>
using namespace std;

/*
 * 判断x是否是完全数，是完全数返回true，不是返回false
 * */
bool f(int x){
    int sum=0;
    /*循环判断x的因子，并求和*/
    for(int i=1;i<x;i++){
        if(x%i==0){
            sum+=i;
        }
    }
    if(x==sum){
        return true;
    }
    return false;
}

int main() {
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(f(i)) cout<<i<<endl;
    }
    return 0;
}
