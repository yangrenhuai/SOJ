/*
【题目描述】
过滤多余的空格。一个句子中也许有多个连续空格，过滤掉多余的空格，只留下一个空格。
【输入】
一行，一个字符串（长度不超过200），句子的头和尾都没有空格。
【输出】
过滤之后的句子。
【输入样例】
Hello      world.This is    c language.
【输出样例】
Hello world.This is c language.
*/

#include <iostream>
using namespace std;

char s[201];
int main() {
    while(scanf("%s",s)==1){
        printf("%s ",s); //输出单词和空格
    }
    return 0;
}
