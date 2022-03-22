/*
昆虫繁殖
 f(n)=f(n-1)+f(n-2-x)*y
 边界条件：f(1)=1  f(2)=1   到第x月值为1
*/

#include <bits/stdc++.h>

using namespace std;

long f[60];
int x,z,i,y;
int main() {
    cin>>x>>y>>z;

    for(i=1;i<=x;i++) f[i]=1;

    for(i=x+1;i<=z+1;i++){
        f[i]=f[i-1]+f[i-2-x]*y;
    }
    cout<<f[z+1];

    return 0;
}
