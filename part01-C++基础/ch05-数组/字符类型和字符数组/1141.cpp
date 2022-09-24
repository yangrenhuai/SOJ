/*
1141：删除单词后缀

【题目描述】
给定一个单词，如果该单词以er、ly或者ing后缀结尾，
 则删除该后缀（题目保证删除后缀后的单词长度不为0），
 否则不进行任何操作。

【输入】
输入一行，包含一个单词（单词中间没有空格，每个单词最大长度为32）。
【输出】
输出按照题目要求处理后的单词。

【输入样例】
referer
【输出样例】
refer
*/
#include "iostream"
using namespace std;

int main(){
    string str;
    cin >> str;

    int length=str.size();

    if(str[length-1]=='r' && str[length-2]=='e'){
        str.erase(length-2,2);
    }

    if(str[length-1]=='y' && str[length-2]=='l'){
        str.erase(length-2,2);
    }

    if(str[length-1]=='g' && str[length-2]=='n'
    && str[length-3]=='i'){
        str.erase(length-3,3);
    }

    cout << str << endl;

    return 0;
}