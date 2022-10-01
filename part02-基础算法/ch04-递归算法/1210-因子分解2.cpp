/*
 1210：因子分解
时间限制: 1000 ms         内存限制: 65536 KB
提交数: 10542     通过数: 6582
【题目描述】
输入一个数，输出其素因子分解表达式。
【输入】
输入一个整数 n (2≤n<100)。
【输出】
输出该整数的因子分解表达式。
表达式中各个素数从小到大排列。
如果该整数可以分解出因子a的b次方，当b大于1时，写做 a^b ；当b等于1时，则直接写成a。
【输入样例】
60
【输出样例】
2^2*3*5
*/

#include <bits/stdc++.h>
using namespace std;
//m待分解的数，n因子，count分解次数
void fun(int m,int n,int count){
    if(m==1) { //分解结束
        if (count > 1) cout << n << '^' << count << endl;
        else if (count == 1)
            cout << n << endl;
    }
    else{
        if(m%n==0){ //判断是否还能继续分解
            fun(m/n,n,count+1);
        }
        else{ //不能继续分解，输出
            if(count>1){
                cout<<n<<'^'<<count<<"*";
            }
            else if(count==1){
                cout<<n<<"*";
            }
            fun(m,n+1,0);//继续递归下一个数
        }
    }
}
int main() {
    int m;
    cin >> m;
    fun(m, 2, 0);//从2开始分解

    return 0;
}
