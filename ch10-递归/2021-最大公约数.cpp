/*
辗转相除法
 如果有两个数a,b；且a>b,设a/b商q余c,则a和b的最大公约数也是b和c的最大公约数。
 这样辗转相除，直到余数为0时除式的商（也就相当于a/b时c那个位置的数字）即为最大公约数

*/


#include <bits/stdc++.h>

using namespace std;

int f(int a,int b){
    int r;
    int m,n;
    if(a>b){
        m=a;
        n=b;
    }
    else{
        m=b;
        n=a;
    }
    r=m%n;
    if(r>0){
        return f(n,r);
    } else{
        return n;
    }
}

int main() {
    int m,n;
    cin>>m>>n;
    cout<<f(m,n)<<endl;
    return 0;
}
