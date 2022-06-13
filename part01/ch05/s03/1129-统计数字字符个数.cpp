/*
【题目描述】
输入一行字符，统计出其中数字字符的个数。
【输入】
一行字符串，总长度不超过255。
【输出】
输出为1行，输出字符串里面数字字符的个数。
【输入样例】
Peking University is set up at 1898.
【输出样例】
4
*/
#include "iostream"
using namespace std;

int main(){
	string str;
	getline(cin,str);

	int ans=0;
	for(int i=0;i<=str.length();i++){
		if(str[i]>='0'&&str[i]<='9') ans++;
	}
	cout<<ans;
    return 0;
}
