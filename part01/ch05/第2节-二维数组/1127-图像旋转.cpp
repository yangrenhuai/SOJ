//
// Created by 杨仁怀 on 2022-05-20.
//
#include<iostream>
using namespace std;
int main(){
    int m,n,a[100][100],b[100][100];
    cin>>m>>n;
    //读入矩阵
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    for(int j=0;j<n;j++){
        for(int i=m-1;i>=0;i--){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}