/*
    1404：我家的门牌号
 【题目描述】
我家住在一条短胡同里，这条胡同的门牌号从1开始顺序编号。

若其余各家的门牌号之和减去我家门牌号的两倍，恰好等于n，求我家的门牌号及总共有多少家。数据保证有唯一解。

【输入】
一个正整数n。n<100000。

【输出】
一行，包含两个正整数，分别是我家的门牌号及总共有多少家，中间用单个空格隔开。

【输入样例】
100
【输出样例】
12 16

 这是一道模拟题
*/

#include "iostream"
using namespace std;

int main(){
    int sum=0; // 所有门牌号之和
    int n;
    cin >> n;

    for(int i=1;i<=500;i++){
        sum+=i;
        // j是我家可能的门牌号
        for(int j=1;j<=i;j++){
            if(sum-j-2*j==n){
                cout << j << " "<< i; // 输出我家门牌号j和所有的家数i（门牌号是从1开始编的）
            }
        }
    }
    return 0;
}
