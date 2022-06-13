//
// Created by 杨仁怀 on 2022-05-20.
//
#include<iostream>

using namespace std;

int main() {
    int m, n;
    int a[101][101], b[101][101];
    int i, j;
    cin >> n >> m;

    // 读入矩阵a
    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
            cin >> a[i][j];
    // 读入矩阵b
    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
            cin >> b[i][j];

    // 循环相加并输出
    for (i = 1; i <= n; i++){
        for (j = 1; j <= m; j++) {
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}