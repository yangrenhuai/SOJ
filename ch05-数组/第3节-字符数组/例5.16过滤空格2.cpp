//
// Created by 杨仁怀 on 2022-06-10.
//

#include <iostream>
using namespace std;

char ch[201];
bool flag= false;
int main() {
    int n=0;
    while((ch[n++]=getchar())!='\n'); // 读入字符串 等同于gets(ch)

    for(int i=0;i<n;i++){
        if(ch[i]!=' ') {
            cout << ch[i];
            flag= false;
        }
        else  if(ch[i]==' ' && !flag) {
            cout<<' ';
            flag=true;
        }
    }

    return 0;
}
