#include <iostream>
#include <cstring>
using namespace std;

int l[110]={0};
int r[110]={0};
int leftLen=0,rightLen=0;
char str[110]={0};
int main(){
	string s;
	while(cin>>s){
		cout<<s<<endl;
		leftLen=0;
		
		for(int i=0;i<110;i++){
			str[i]=' ';
		}
	
		//循环遍历字符串s
		for(int i=0;i<s.length();i++){
			if(s[i]=='('){
				l[leftLen]=i;
				leftLen++;
				str[i]='(';
			}
			else if(s[i]==')'){
				if(leftLen>0){
					leftLen--;
					str[l[leftLen]]=' ';
				}
				else{
					str[i]=')';
				}
			}
			else{
				str[i]=' ';
			}
		}
	
		for(int i=0;i<s.length();i++){
			if(str[i]=='(') cout<<'$';
			else if(str[i]==')') cout<<'?';
			else cout<< ' ';
		}
		cout<< endl;
	}
	
	return 0;
}
