/*
【题目描述】
编程输入n(1≤n≤20)个小于1000非负整数，然后自动按从大到小的顺序输出。（冒泡排序）

【输入】
第一行，数的个数n;

第二行，n个非负整数。

【输出】
由大到小的n个非负整数，每个数占一行。

【输入样例】
5
2 5 8 6 12
【输出样例】
12
8
6
5
2
*/


#include <iostream>

using namespace std;

int n;
int a[1000];
int main() {
    cin >> n ;
    for( int i= 0;i < n; i++){
        cin >> a[i] ;
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]) swap(a[i],a[j]);
        }
    }

    for(int i=0;i<n;i++)
        cout<< a[i] << endl ;
    return 0;
}
