/*
 Created by 杨仁怀 on 2022-02-10.
 过河卒问题
*/
#include "iostream"
using namespace std;

int n,m;//B点的坐标
int x,y;//马的坐标
long long a[21][21];//棋盘
int i,j;
int main(){
    cin>>n>>m>>x>>y;
    //1.标记第一行和第一列所有点的走法为1
    //2.标记马以及马的控制点走法为0
    //3.a[0][0]不需要计算
    //  第一行除了控制点，a[i][j]=左侧的值
    //  第一列除了控制点，a[i][j]=上方的值
    //  其余的点，除了控制点，a[i][j]=a左侧+上方的值
    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++){
            a[i][j]=1;
        }
    }
    //设置马及马的控制点为0
    a[x][y] = 0;
    //如果控制点在棋盘内，则设置为0
    if(x-1>=0&&y-2>=0) a[x-1][y-2] = 0;
    if(x-2>=0&&y-1>=0) a[x-2][y-1] = 0;
    if(x-2>=0&&y+1<=m) a[x-2][y+1] = 0;
    if(x-1>=0&&y+2<=m) a[x-1][y+2] = 0;
    if(x+1<=n&&y+2<=m) a[x+1][y+2] = 0;
    if(x+2<=n&&y+1<=m) a[x+2][y+1] = 0;
    if(x+2<=n&&y-1>=0) a[x+2][y-1] = 0;
    if(x+1<=n&&y-2>=0) a[x+1][y-2] = 0;

    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++){
            if(i==0 && j==0) continue;//a[0][0]点不需要计算
            if(a[i][j]==0) continue;
            if(i==0){
                a[i][j]=a[i][j-1];
            }
            else if(j==0){
                a[i][j]=a[i-1][j];
            }
            else{
                a[i][j]=a[i][j-1]+a[i-1][j];
            }
        }
    }

    cout<<a[n][m];

    return 0;
}