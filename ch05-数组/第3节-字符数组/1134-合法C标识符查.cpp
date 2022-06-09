/*
【题目描述】
给定一个不包含空白符的字符串，请判断是否是C语言合法的标识符号(注：题目保证这些字符串一定不是C语言的保留字)。

C语言标识符要求：

1.非保留字；

2.只包含字母、数字及下划线（“_”）。

3.不以数字开头。

【输入】
一行，包含一个字符串，字符串中不包含任何空白字符，且长度不大于20。

【输出】
一行，如果它是C语言的合法标识符，则输出yes，否则输出no。

【输入样例】
RKPEGX9R;TWyYcp
【输出样例】
no
*/


#include <iostream>
using namespace std;

int main()
{
    char a[300];
    cin.getline(a,300);
    int len=strlen(a);
    if(a[0]>='0'&&a[0]<='9')
    {
        cout<<"no";
        return 0;
    }
    for(int i=0;i<len;i++)
    {
        if(!((a[i]>='0'&&a[i]<='9')||(a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z')||a[i]=='_')){
            cout<<"no";
            return 0;
        }

    }
    cout<<"yes";
    return 0;
}