/**
 * 1400-统计单词数【重点】
 * 思路：
 * 1.首先输入的字符串有空格，因此使用getline()函数输入或gets()
 * 2.对输入的数据预处理，首尾加空格，做到完全匹配
 * 3.使用变量i和j作为指针，遍历查询（也可以使用string的find函数）
 */

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string word,sen;
    int len1,len2;
    int i,j;
    int ans=0,dir;

    getline(cin,word);//输入单词
    getline(cin,sen);//输入句子
    word=' '+word+' '; // 单词和句子预处理
    sen=' '+sen+' ';
    len1 = word.size();//记录单词的长度
    len2 = sen.size();//记录句子的长度

    for(i = 0; i < len2; i++)
    {
        for(j = 0; j < len1; j++)
        {
            if(toupper(sen[i+j]) != toupper(word[j]))
                break;//若字符不匹配退出循环，再从第i+1个开始判定
        }
        if(j == len1)//若循环判定通过
        {
            ans++;//累加满足条件单词数
            if(ans == 1)//若第一次出现
                dir = i;//记录位置
        }
    }
    if(ans)
        cout << ans <<" "<< dir <<endl;
    else
        cout << "-1" << endl;
    return 0;
}