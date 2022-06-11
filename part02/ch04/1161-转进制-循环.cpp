//
// Created by 杨仁怀 on 2022-03-24.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    char result[100];
    char num[16]= {'0','1','2','3','4','5','6',
                   '7','8','9','A','B','C',
                   'D','E','F'};
    int x,m,k,len=0;//k记录余数，len记录结果数组的长度
    cin>>x>>m;//输入十进制数x与要转换成的进制m
    do{
        k=x%m;
        x=x/m;
        result[len]=k;
        len++;
    }while(x>0);
    for(int i=len-1;i>=0;i--){
        cout<<num[result[i]];
    }
    return 0;
}
