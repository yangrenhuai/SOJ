/*
 1个苹果，n个盘子：f(1,1)=f(1,2)=...=f(1,n)=1
 m个苹果，1个盘子：f(1,1)=f(2,1)=...=f(m,1)=1
 m个苹果，n个盘子：
    如果m>=n: f(m,n)=f(m-n,n)+f(m,n-1)
    如果m<n : f(m,n)=f(m,m)
*/

#include <bits/stdc++.h>

using namespace std;
long long f[15][15];
int i,j,m,n,t;
int main() {
    f[1][1]=1;
    //1个苹果，n个盘子
    for(i=1;i<=15;i++){
        f[0][i]=1;
        f[1][i]=1;
    }
    //m个苹果，1个盘子
    for(i=1;i<15;i++){
        f[i][0]=1;
        f[i][1]=1;
    }
    for(i=2;i<=15;i++){
        for(j=2;j<=15;j++){
            if(i>=j)
                f[i][j]=f[i-j][j]+f[i][j-1];
            else
                f[i][j]=f[i][i];
        }
    }

    cin>>t;
    for(int k=0;k<t;k++){
        cin>>m>>n;
        cout<<f[m][n]<<endl;
    }

    return 0;
}
