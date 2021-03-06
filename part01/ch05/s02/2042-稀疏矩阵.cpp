/*
【题目描述】
n×m矩阵大部分元素是0的矩阵称为稀疏矩阵，假设有k个非0元素，则可把稀疏矩阵用K×3的矩阵简记之，其中第一列是行号，第二列是列号，第三列是该行、该列下的非元素的值。如：

0 0 0 5
0 2 0 0
0 1 0 0
写简记成：

1 4 5      //第1行第4列有个数是5
2 2 2      //第2行第2列有个数是2
3 2 1      //第3行第2列有个数是1
试编程读入一稀疏矩阵，转换成简记形式，并输出。

【输入】
第一行为n和m,n为行数，m为列数；

接下来是一个n×m的矩阵，矩阵中每个正整数小于1000。

【输出】
输出矩阵的简记形式。简记形式有多种形式，输出一种正确形式即可。

【输入样例】
3 5
0 0 0 0 5
0 0 4 0 0
1 0 0 0 1
【输出样例】
3 5 1
1 5 5
2 3 4
3 1 1
*/


#include <iostream>

using namespace std;

int main() {

    int a[100][100],n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]!=0)   cout<<i<<" "<<j<<" "<<a[i][j]<<endl;
        }
    }
    return 0;

}
