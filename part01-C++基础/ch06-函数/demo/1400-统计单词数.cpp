#include <iostream>
using namespace std;

int main(){
	string str[500],s;
	int len=0;
	
	while(cin>>s){
		for(int i=0;i<s.length();i++){
			s[i]=tolower(s[i]);
		}
		str[len]=s;
		len++;
	}
	
	for(int i=0;i<len;i++){
		cout << str[i] <<endl;
	}
}
