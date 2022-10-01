//
// Created by 杨仁怀 on 2022-05-28.
//

#include <iostream>
using namespace std;

int calc(int m,int n) { //m个苹果，n个盘子
    if(n==1||m==0)//一个盘子 、0个苹果（每个盘子放一个正好放完）
        return 1;
    if(m<n)//删去多余的空盘子
        return calc(m,m);
    //不留空盘子(每个盘子放一个，
	//然后处理剩余的放在每一个盘子的放法数)+可以留空盘子(至少留一个，从留一个开始，不断往下递归减少)
    return calc(m-n,n)+calc(m,n-1);

}

int main() {
    int t,m,n;
    cin>>t;
    while(t--) {
        cin>>m>>n;
        cout<<calc(m,n)<<endl;
    }
    return 0;
}
