/*
【题目描述】
给定一个5×5的矩阵，每行只有一个最大值，每列只有一个最小值，寻找这个矩阵的鞍点。鞍点指的是矩阵中的一个元素，它是所在行的最大值，并且是所在列的最小值。

例如：在下面的例子中（第4行第1列的元素就是鞍点，值为8 ）。

11 3 5 6 9
12 4 7 8 10
10 5 6 9 11
8 6 4 7 2
15 10 11 20 25
【输入】
输入包含一个5行5列的矩阵。

【输出】
如果存在鞍点，输出鞍点所在的行、列及其值，如果不存在，输出"not found"。

【输入样例】
11 3 5 6 9
12 4 7 8 10
10 5 6 9 11
8 6 4 7 2
15 10 11 20 25
【输出样例】
4 1 8
*/


#include <iostream>

using namespace std;
int a[100][100],maxn,maxi,maxj;
bool flag=false;//标识是否存在鞍点
int main() {
    // 输入矩阵
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin >> a[i][j];
        }
    }

    for(int i=1;i<=5;i++){
        flag=true;// 假定当前行存在鞍点
        //找到当前行的最大值
        maxn=a[i][0];
        for(int j=1;j<=5;j++){
            if(maxn<a[i][j]){
                maxn=a[i][j]; //记录最大值
                maxi=i; //记录最大值所在行
                maxj=j; //记录最大值所在列
            }
        }

        // 寻找最大值是否是当前列的最小值
        for(int k=1;k<=5;k++){
            if(a[k][maxj]< maxn){
                flag= false;
                break;
            }
        }
        if(flag){
            printf("%d %d %d\n",maxi,maxj,maxn);
            return 0;
        }
    }
    cout<<"not found"<<endl;
    return 0;
}
