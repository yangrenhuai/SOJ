/*
【题目描述】
编写程序，求给定字符串s的亲朋字符串s1。

   亲朋字符串s1定义如下：给定字符串s的第一个字符的ASCII值加第二个字符的ASCII值，得到第一个亲朋字符； 给定字符串s的第二个字符的ASCII值加第三个字符的ASCII值，得到第二个亲朋字符；依此类推，直到给定字符串s的倒数第二个字符。亲朋字符串的最后一个字符由给定字符串s的最后一个字符ASCII值加s的第一个字符的ASCII值。

【输入】
输入一行，一个长度大于等于2，小于等于100的字符串。字符串中每个字符的ASCII值不大于63。

【输出】
输出一行，为变换后的亲朋字符串。输入保证变换后的字符串只有一行。

【输入样例】
1234
【输出样例】
cege

*/


#include<bits/stdc++.h>
using namespace std;
char s[105];
int main()
{
    cin>>s;
    int len=strlen(s);//字符串长度
    for(int i=0;i<len-1;i++)cout<<(char)(s[i]+s[i+1]);//新字符串前len-1位
    cout<<(char)(s[len-1]+s[0]);//最后一位输出
    return 0;
}