/*
1138：将字符串中的小写字母转换成大写字母
【题目描述】
给定一个字符串，将其中所有的小写字母转换成大写字母。
【输入】
输入一行，包含一个字符串（长度不超过100，可能包含空格）。
【输出】
输出转换后的字符串。
【输入样例】
helloworld123Ha
【输出样例】
HELLOWORLD123HA
*/

#include "iostream"
#include "string"
using namespace std;

int main(){
    string str;
    getline(cin,str);

    for(int i=0;i<str.length();i++){
        if(str[i]>='a' && str[i]<='z'){
            putchar(str[i]-32);
        }
        else{
            putchar(str[i]);
        }
    }
}

