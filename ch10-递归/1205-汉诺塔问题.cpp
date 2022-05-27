//
// Created by 杨仁怀 on 2022-05-20.
//

#include <iostream>

using namespace std;

void h(int n,char a,char b,char c){
    if(n==1){
        printf("%c->%d->%c\n",a,n,b);
        return ;
    }
    else{
        h(n-1,a,c,b);//把前n-1个盘子，由a移到c，经过b
        printf("%c->%d->%c\n",a,n,b); //把第n个盘子由a移到b
        h(n-1,c,b,a);//把前n-1个盘子，由c移到b，经过a
    }
}
int main() {
    int n;
    char a,b,c;
    cin >> n>>a>>b>>c;
    h(n,a,b,c); // 将n个盘子从a移到b

    return 0;
}
