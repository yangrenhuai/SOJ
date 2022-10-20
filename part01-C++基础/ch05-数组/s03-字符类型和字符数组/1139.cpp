/*1139：整理药名
 * 【题目描述】
医生在书写药品名的时候经常不注意大小写，格式比较混乱。现要求你
 写一个程序将医生书写混乱的药品名整理成统一规范的格式，即药品名
 的第一个字符如果是字母要大写，其他字母小写。如将ASPIRIN、aspirin
 整理成Aspirin。

【输入】
第一行一个数字n，表示有n个药品名要整理，n不超过100。

接下来n行，每行一个单词，长度不超过20，表示医生手书的药品名。药品名由字母、数字和-组成。
【输出】
n行，每行一个单词，对应输入的药品名的规范写法。
【输入样例】
4
AspiRin
cisapride
2-PENICILLIN
Cefradine-6
【输出样例】
Aspirin
Cisapride
2-penicillin
Cefradine-6
*/



#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        int len=s.size();//字符串长度
        if(islower(s[0]))s[0]=(char)(toupper(s[0]));//首字母大写
        cout<<s[0];
        for(int j=1;j<len;j++)
        {
            if(isupper(s[j]))s[j]=(char)(tolower(s[j]));//其余字母小写
            cout<<s[j];
        }
        cout<<"\n";
    }
    return 0;
}