#include <iostream>
using namespace std;

string s;
char str[110]; //存放不匹配的括号
int lenLeft=0;
int l[110]={0};
int strLen=0;

// 搜索s在pos的位置上的字符
void f(int pos){
	if(pos==strLen) return;
	
	//搜索pos位置上的数据
	if(s[pos]=='('){
		str[pos]='(';
		l[lenLeft]=pos;
		lenLeft++;
	}
	else if(s[pos]==')'){
		if(lenLeft>0){
			lenLeft--;
			str[l[lenLeft]]=' ';
		}
		else{
			str[pos]=')';
		}
	}
	else{
		str[pos]=' ';
	}
	
	f(pos+1);
}

int main(){
	while(cin>>s){
		strLen=s.length();
		lenLeft=0;
		for(int i=0;i<110;i++){
			str[i]=' ';
		}
		
		f(0);
		
		for(int i=0;i<s.length();i++){
			if(str[i]=='(') cout<<'$';
			else if(str[i]==')') cout<<'?';
			else cout<< ' ';
		}
		cout<< endl;
	}
}
