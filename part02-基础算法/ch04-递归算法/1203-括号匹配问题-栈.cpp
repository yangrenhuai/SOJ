/*
【题目描述】
在某个字符串（长度不超过100）中有左括号、右括号和大小写字母；规定（与常见的算数式子一样）任何一个左括号都从内到外与在它右边且距离最近的右括号匹配。写一个程序，找到无法匹配的左括号和右括号，输出原来字符串，并在下一行标出不能匹配的括号。不能匹配的左括号用"$"标注,不能匹配的右括号用"?"标注。

【输入】
输入包括多组数据，每组数据一行，包含一个字符串，只包含左右括号和大小写字母，字符串长度不超过100。

【输出】
对每组输出数据，输出两行，第一行包含原始输入字符，第二行由"$","?"和空格组成，"$"和"?"表示与之对应的左括号和右括号不能匹配。

【输入样例】
((ABCD(x)
)(rttyy())sss)(
【输出样例】
((ABCD(x)
$$
)(rttyy())sss)(
?            ?$
*/
#include <iostream>
#include "cstring"

using namespace std;

char str[110]; // 存储读入的每行字符串
char a[110]; //模拟栈，存储括号
int b[110]; //存储不能匹配的括号位置
int len;//栈的长度
int main() {
    while(cin>> str){
        cout<<str<<endl;
        len=0;//初始化栈的长度为0
        for(int i=0;i<strlen(str);i++){
            if(str[i]=='('){
                a[len]='('; //将左括号压入栈中
                b[len]=i;
                len++;
            }
            else if(str[i]==')'){
                if(len>0 && a[len-1]=='('){
                    str[b[len-1]]=' '; //有匹配的括号，将str设置为空格
                    str[i]=' ';
                    len--;//有匹配的左括号，弹栈
                }
                else{ // 没有匹配的左括号，将）入栈
                    a[len]=')';
                    b[len]=i;
                    len++;
                }
            }
            else
                str[i]=' ';
        }

        //输出栈的内容
        for(int i=0;i<strlen(str);i++){
            if(str[i]=='(') str[i]='$';
            else if (str[i]==')') str[i]='?';
            cout<<str[i];
        }
        cout << endl;
    }

    return 0;
}
