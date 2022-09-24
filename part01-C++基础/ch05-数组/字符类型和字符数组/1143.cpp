/*
1143：最长最短单词

【题目描述】
输入1行句子(不多于200个单词，每个单词长度不超过100)，只包含字母、空格和逗号。单词由至少一个连续的字母构成，空格和逗号都是单词间的间隔。

 试输出第1个最长的单词和第1个最短单词。

【输入】
一行句子。

【输出】
第1行，第一个最长的单词。

第2行，第一个最短的单词。

【输入样例】
I am studying Programming language C in Peking University
【输出样例】
Programming
I
*/

#include "iostream"
#include "cstring"
using namespace std;

char str[30000]={0};
int main()
{
    char maxW[105]={0}; // 最长单词
    char minW[105]={0}; // 最短单词

    /*本题不能使用gets函数，否则会有编译错误*/
    int len=0;
    char ch;
    while((ch=getchar())!='\n') str[len++]=ch;
    str[len]='\0';

    int l=0,minL=101,maxL=0;
    int index=0;
    for(int i=0;i<len;i++){
        if(str[i]==' '||str[i]==','){
            if(i!=len-1)
                str[i]='\0';
            l=strlen(str+index);
            if(l>maxL){
                maxL=l;
                strcpy(maxW,str+index);
            }
            if(l<minL&&l!=0){
                minL=l;
                strcpy(minW,str+index);
            }
            index=i+1;
        }
    }
    cout<<maxW<<"\n"<<minW;
    return 0;
}