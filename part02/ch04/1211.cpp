/*
1211：判断元素是否存在

【题目描述】
有一个集合M是这样生成的：(1) 已知k是集合M的元素； (2) 如果y是M的元素，那么，2y+1和3y+1都是M的元素；(3) 除了上述二种情况外，没有别的数能够成为M的一个元素。

问题：任意给定k和x，请判断x是否是M的元素。这里的k是无符号整数，x 不大于 100000，如果是，则输出YES，否则，输出NO。

【输入】
输入整数 k 和 x, 逗号间隔。

【输出】
如果是，则输出 YES，否则，输出NO。

【输入样例】
0,22
【输出样例】
YES
*/
#include "iostream"
using namespace std;

int k,x;

// 判断x是否在集合中，n表示集合中的一个元素
int f(int n){
    if(n>x) return 0;
    else if(n==x) return 1;
    else return f(2*n+1)||f(3*n+1);
}
int main(){
    char ch;
    cin >> k >> ch >> x;

    int r=f(k);
    if(r==1) cout << "YES";
    if(r==0) cout << "NO";

    return 0;
}