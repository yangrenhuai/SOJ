//
// Created by 杨仁怀 on 2022-03-31.
//

#include <bits/stdc++.h>

using namespace std;

void fun(int m,int n){
    if(m==1){
        return ;
    }
    else{
       if(m%n==0){
           cout<<n<<"*";
           fun(m/n,n);
       }
       else{
           fun(m,n+1);
       }
    }
}

int main() {
    fun(20,2);
    return 0;
}
