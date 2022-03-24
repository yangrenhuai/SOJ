//
// Created by 杨仁怀 on 2022-03-23.
//
#include<bits/stdc++.h>
using namespace std;
void jiaogu(int n) {//递归函数
    if(n==1) {//终止条件
        cout<<"End";
        return;
    }
    if(n%2==0){
        cout<<n<<"/2="<<n/2<<endl;
        jiaogu(n/2);//递归
    }
    else{
        cout<<n<<"*3+1="<<n*3+1<<endl;
        jiaogu(n*3+1);//递归
    }
}
int main() {
    int n;
    cin>>n;
    jiaogu(n);//调用函数
    return 0;
}