#include <iostream>
using namespace std;

// 字数数组a存放密码表
char a[26][26];
string m,c,k;

int main(){
	// 初始化密码二维表
	for(int i=0;i<26;i++){
		for(int j=0;j<26;j++){
			a[i][j]='A'+(i+j)%26;
		}
	}
	//得到用户输入的key和c
	getline(cin,k);
	getline(cin,c);
	
	//将密钥全部转换成大写
	for(int i=0;i<k.length();i++){
		k[i]=tolower(k[i]);
	}
	
	
	//计算明文
	int x; //x表示用的是第几个密钥
	for(int i=0;i<c.size();i++){
		x=i%k.size();
		for(int j=0;j<26;j++){
			  if(a[k[x]-'a'][j]==c[i]){
				  cout<<(char)('A'+j);
			  }
			  if((char)(a[k[x]-'a'][j]+32)==c[i]){
				  cout<<(char)('a'+j);
			  }
		}
	}
	
	
	return 0;
}
