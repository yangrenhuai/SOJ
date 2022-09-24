//
// Created by 杨仁怀 on 2022-05-28.
//

#include <iostream>

using namespace std;

int a[30][30]={0};
int main()
{
    int n,d,x,y;//将矩阵初始化
    cin>>n;
    d=1,x=0,y=n-1;
    a[x][y]=1;
    while(d<n*n)
    {
        while(x<n-1&&!a[x+1][y])//判断下走是否越界
            a[++x][y]=++d;
        while(y>0&&!a[x][y-1])//判断向左走是否越界
            a[x][--y]=++d;
        while(x>0&&!a[x-1][y])//判断向上是否越界
            a[--x][y]=++d;
        while(y<n-1&&!a[x][y+1])//判断向右走是否越界
            a[x][++y]=++d;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}