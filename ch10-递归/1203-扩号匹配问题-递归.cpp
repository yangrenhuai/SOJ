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
#include <cstring>

using namespace std;

char str[110]; // 读入的字符串
int strLen, leftLen, rightLen; // strLen字符串长度，leftLen左括号长度，rightLen右括号长度
int l[110], r[110];//记录左括号和右括号的位置

void f(int pos){
    if(pos == strLen) return ; // 递归终止条件
    if(str[pos]=='(')
        l[leftLen++]=pos; // 记录左括号，并增加leftLen
    else if(str[pos]==')'){
        if(leftLen>0) leftLen--; // 有匹配的括号，弹出左括号
        else r[rightLen++]=pos ; // 没有匹配的括号，记录右括号
    }
    str[pos]=' '; // 将数组中的字符设为空格
    f(pos+1); // 搜索下一个
}
int main() {
    while (cin >> str) {//循环不断的读入一行字符串
        cout << str << endl; // 首先原样输出字符串

        strLen=strlen(str);
        leftLen = 0, rightLen = 0; // 开始搜索前，将左括号长度和右括号长度设为0
        f(0); // 从最开始搜索

        // 检索是否有不匹配的括号
        for(int i=0;i<leftLen;i++)
            str[l[i]]='$';
        for(int i=0;i<rightLen;i++)
            str[r[i]]='?';

        cout<< str << endl; //输出字符串
    }
    return 0;
}
