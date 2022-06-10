/*
【题目描述】
在情报传递过程中，为了防止情报被截获，往往需要对情报用一定的方式加密，简单的加密算法虽然不足以完全避免情报被破译，
 但仍然能防止情报被轻易的识别。我们给出一种最简的的加密方法，对给定的一个字符串，把其中从a-y，
 A-Y的字母用其后继字母替代，把z和Z用a和A替代，其他非字母字符不变，则可得到一个简单的加密字符串。

【输入】
输入一行，包含一个字符串，长度小于80个字符。

【输出】
输出每行字符串的加密字符串。

【输入样例】
Hello! How are you!
【输出样例】
Ifmmp! Ipx bsf zpv!
*/


#include <iostream>
#include <cstring>

using namespace std;

char a[81];
int main() {

	int len;

    scanf("%s",a);

	len = strlen(a);

	for	(int i = 0; i < len; i++) {
		if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z')) {
			if (a[i] == 'z' || a[i] == 'Z')
				cout<< a[i] - 25;
			else
				cout<< a[i] + 1;
		}
		else{
			cout<< a[i];
		}
	}


	return 0;
}
