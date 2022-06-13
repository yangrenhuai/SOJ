/*
1137：加密的病历单
【题目描述】
小英是药学专业大三的学生，暑假期间获得了去医院药房实习的机会。
在药房实习期间，小英扎实的专业基础获得了医生的一致好评，
 得知小英在计算概论中取得过好成绩后，主任又额外交给她一项任务，
 解密抗战时期被加密过的一些伤员的名单。
经过研究，小英发现了如下加密规律(括号中是一个“原文 -> 密文”的例子)
1.原文中所有的字符都在字母表中被循环左移了三个位置（dec  -> abz）
2.逆序存储（abcd -> dcba ）
3.大小写反转（abXY -> ABxy）
【输入】
一个加密的字符串。(长度小于50且只包含大小写字母)
【输出】
输出解密后的字符串。
【输入样例】
GSOOWFASOq
【输出样例】
Trvdizrrvj
*/
#include "iostream"
#include "string"
using namespace std;

int main(){
    string str;
    getline(cin,str); // 读入一行字符串

    int len=str.length();
    //1.大小写反转
    for(int i=0;i<len;i++){
        if(str[i]>='a' && str[i]<='z') str[i]-=32;
        else if(str[i]>='A' && str[i]<='Z') str[i]+=32;
    }

    //2.逆序存放
    for(int i=0;i<len/2;i++){
        swap(str[i],str[len-i-1]);
    }

    //3.依次右移3位
    for(int i=0;i<len;i++){
        if(str[i]>='A' && str[i]<='Z'){
            if(str[i]<'X') str[i]+=3;
            else if (str[i]=='X') str[i]='A';
            else if(str[i]=='Y') str[i]='B';
            else if(str[i]=='Z') str[i]='C';
        } else if(str[i]>='a' && str[i]<='z'){
            if(str[i]<'x') str[i]+=3;
            else if (str[i]=='x') str[i]='a';
            else if(str[i]=='y') str[i]='b';
            else if(str[i]=='z') str[i]='c';
        }
    }
    cout<< str;
    return 0;
}