/*
【题目描述】
输入n个整数,存放在数组a[1]至a[n]中，输出最大数所在位置(n≤1000)。

【输入】
第一行，数的个数n;

第二行，n个正整数，每个数在2的32−1次方之内。

【输出】
最大数所在位置。

【输入样例】
5
67 43 90 78 32
【输出样例】
3
*/

#include <iostream>

using namespace std;

int maxn,maxi;
int n,x;
int main() {
    cin >> n;
    maxn=0;
    for(int i=1;i<=n;i++){
       cin >> x;
       if(x>maxn){
           maxn=x;
           maxi=i;
       }
    }

    cout << maxi ;

    return 0;
}
