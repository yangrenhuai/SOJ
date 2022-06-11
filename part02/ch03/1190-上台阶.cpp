/*
【题目描述】
楼梯有n(71>n>0)阶台阶,上楼时可以一步上1阶,也可以一步上2阶,也可以一步上3阶，编程计算共有多少种不同的走法。
【输入】
输入的每一行包括一组测试数据，即为台阶数n。最后一行为0，表示测试结束。
【输出】
每一行输出对应一行输入的结果，即为走法的数目。
【输入样例】
1
2
3
4
0
【输出样例】
1
2
4
7
*/

#include <bits/stdc++.h>

using namespace std;

long long a[101];
int n;
int main() {
    a[1]=1;
    a[2]=2;
    a[3]=4;
    for(int i=4;i<71;i++){
        a[i]=a[i-1]+a[i-2]+a[i-3];
    }
//    for(int i=4;i<71;i++){
//        cout<<a[i]<<endl;
//    }

    do{
        cin>>n;
        //第一次执行循环，n值可能为0
        if(n>0) cout<<a[n]<<endl;
    } while (n>0);
    return 0;
}
