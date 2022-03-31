//
// Created by 杨仁怀 on 2022-03-29.
//

#include <bits/stdc++.h>
using namespace std;
void fun(int m,int n,int count){
    if(m==1) {
        if (count > 1) cout << n << '^' << count << endl;
        else if (count == 1)
            cout << n << endl;
    }
    else{
        if(m%n==0){
            fun(m/n,n,count+1);
        }
        else{
            if(count>1){
                cout<<n<<'^'<<count<<"*";
            }
            else if(count==1){
                cout<<n<<"*";
            }
            fun(m,n+1,0);//继续递归下一个数
        }
    }
}
int main() {
    int m;
    cin >> m;
    fun(m, 2, 0);

    return 0;
}
