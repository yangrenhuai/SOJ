//
// Created by 杨仁怀 on 2022-05-13.
//

#include <iostream>

using namespace std;

int a[6][6];
int m,n;
int main() {
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++) cin>>a[i][j];
    }
    cin>>m>>n;

    //交换
    for(int j=1;j<=5;j++){
        swap(a[m][j],a[n][j]);
    }

    //输出
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++) cout << a[i][j]<<" ";
        cout<< endl;
    }
    return 0;
}
