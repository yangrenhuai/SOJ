/*
1140：验证子串

【题目描述】
输入两个字符串，验证其中一个串是否为另一个串的子串。
【输入】
输入两个字符串， 每个字符串占一行，长度不超过200且不含空格。
【输出】
若第一个串s1是第二个串s2的子串，则输出(s1) is substring of (s2)
否则，若第二个串s2是第一个串s1的子串，输出(s2) is substring of (s1)
否则，输出 No substring。
【输入样例】
abc
dddncabca
【输出样例】
abc is substring of dddncabca
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int idx; // 查到的字串的位置
    idx=a.find(b);//在 a 中查找b
    if(idx!=-1){//表示能查到
        cout<<b<<" is substring of "<<a<<endl;
    }
    else{
        idx=b.find(a);
        if(idx!=-1){
            cout<<a<<" is substring of "<<b<<endl;
        }
        else
            cout<<"No substring"<<endl;
    }
    return 0;
}
