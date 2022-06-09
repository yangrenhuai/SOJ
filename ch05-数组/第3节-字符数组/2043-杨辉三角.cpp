//
// Created by 杨仁怀 on 2022-05-27.
//

#include <iostream>
using namespace std;

int a[1000][1000];
int i,j;
int main()
{
    int n;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            if(j==0||i==j){
                a[i][j]=1;
            }
            else{
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}