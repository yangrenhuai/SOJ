//
// Created by 杨仁怀 on 2022-05-20.
//

#include <iostream>
#include <cstring>
using namespace std;

int n,m,k,a[100][100],b[100][100],c[100][100];
int main()
{
    cin>>n>>m>>k;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    for(int i=0;i<m;i++)
        for(int j=0;j<k;j++)
            cin>>b[i][j];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {//c[i][j] = a[i][0]×b[0][j] + a[i][1]×b[1][j] + …… +a[i][m-1]×b[m-1][j]
            for(int k=0;k<m;k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
            cout<<c[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}