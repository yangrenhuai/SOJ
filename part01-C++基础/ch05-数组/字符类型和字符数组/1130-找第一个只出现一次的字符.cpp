/*
【题目描述】
给定一个只包含小写字母的字符串，请你找到第一个仅出现一次的字符。如果没有，输出no。
【输入】
一个字符串，长度小于100000。
【输出】
输出第一个仅出现一次的字符，若没有则输出no。

【输入样例】
abcabd
【输出样例】
c
*/

#include "iostream"
#include "cstring"
using namespace std;

char a[100001], b[26];
int main() {
	cin >> a;
	long len = strlen(a);
	for (int i = 0; i < len; i++)
		b[a[i] - 'a']++;
	for (int i = 0; i < len; i++)
		if (b[a[i] - 'a'] == 1) {
			cout << a[i];
			return 0;
		}
	cout << "no" << endl;
	return 0;
}
