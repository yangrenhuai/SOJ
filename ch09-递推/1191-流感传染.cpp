/*
【题目描述】
有一批易感人群住在网格状的宿舍区内，宿舍区为n*n的矩阵，每个格点为一个房间，房间里可能住人，也可能空着。在第一天，有些房间里的人得了流感，以后每天，得流感的人会使其邻居传染上流感，（已经得病的不变），空房间不会传染。请输出第m天得流感的人数。
【输入】
第一行一个数字n，n不超过100，表示有n*n的宿舍房间。
接下来的n行，每行n个字符，’.’表示第一天该房间住着健康的人，’#’表示该房间空着，’@’表示第一天该房间住着得流感的人。
接下来的一行是一个整数m，m不超过100。
【输出】
输出第m天，得流感的人数。
【输入样例】
5
....#
.#.@.
.#@..
#....
.....
4
【输出样例】
16
*/

#include <bits/stdc++.h>

using namespace std;
char a[101][101];
bool b[101][101];//标记是否被传染,true-传染,false-健康
int m,n;//m-天，n-行
int total=0;//感染流感的总人数
int main() {
    memset(b,false,sizeof(b));//初始化
    cin>>n;

    //读入数据到数组a中
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            if(a[i][j]=='@'){
                b[i][j]=true;
            }
        }
    }
    cin>>m;

    //模拟m天
    for(int k=2;k<=m;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(a[i][j]=='@'){
                    if(a[i-1][j]=='.') b[i-1][j]=true;
                    if(a[i+1][j]=='.') b[i+1][j]=true;
                    if(a[i][j-1]=='.') b[i][j-1]=true;
                    if(a[i][j+1]=='.') b[i][j+1]=true;
                }
            }
        }
        //根据标记数组b，更新数组a
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(b[i][j]==true){
                    a[i][j]='@';
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(b[i][j]==true){
                total++;
            }
        }
    }

    //统计感染人数
    cout<<total<<endl;

    return 0;
}
