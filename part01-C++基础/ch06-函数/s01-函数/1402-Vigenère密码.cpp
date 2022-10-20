#include "iostream"
using namespace std;

char a[26][26];

int main() {
	// 初始化密码表
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < 26; j++) {
			a[i][j] = 'A' + (i + j) % 26;
		}
	}

	string m, k; // m表示明文，k表示密钥
	cin >> k >> m;

	//如果密钥是小写的，将密钥转换成大写
	for(int i=0;i<k.length();i++){
		if(k[i]>='a' && k[i]<='z') k[i]=k[i]-32;
	}

	int pos = 0; //表示当前使用的第几个密钥
	for(int j=0;j<m.length();j++){
		for(int i=0;i<26;i++){
			if(a[i][k[pos]-'A']==m[j]){
				cout<<(char)('A'+i);
			}
			if((char)(a[i][k[pos]-'A']+32)==m[j]){
				cout<<(char)('a'+i);
			}
		}
		pos++;
		pos=pos%k.length();
	}

	return 0;
}
