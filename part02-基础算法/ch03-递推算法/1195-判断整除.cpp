/*
核心思想：
1）减小问题规模 a[i]=a[i]%k;
2) 取余满足加法分配律，即：(a+b)%c==(a%c+b%c)%c
*/

#include <bits/stdc++.h>

using namespace std;
int a[10001];//存储从键盘上输入的数
int f[10001][101]={0};//存储数组a中对k取余可能的结果
int main() {
    int n,k;
    cin>>n>>k;

    //输入n个数
    for(int i=1;i<=n;i++){
        cin>>a[i];
        a[i]=a[i]%k;
    }

    f[0][0]=1;//边界
    for(int i=1;i<=n;i++){
        //j表示余数，范围为0到k-1
        for(int j=0;j<k;j++){
            if(f[i-1][j]==1){
                int index=(a[i]+j+k)%k;
                f[i][index]=1;

                index=(j-a[i]+k)%k;
                f[i][index]=1;
            }
        }
    }
    if(f[n][0]==1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
