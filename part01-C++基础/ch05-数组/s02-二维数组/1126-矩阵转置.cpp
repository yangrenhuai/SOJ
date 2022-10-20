//
// Created by 杨仁怀 on 2022-05-20.
//

#include<bits/stdc++.h>
using namespace std;
int a[101][101];
int main()
{
    int m,n;
    int i,j;
    cin>>m>>n;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            cout<<a[j][i]<<" ";
        cout<<endl;
    }

    return 0;
}