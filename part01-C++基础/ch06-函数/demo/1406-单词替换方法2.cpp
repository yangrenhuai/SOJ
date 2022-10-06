#include <iostream>
using namespace std;

int main(){
	string s;
	string a,b; //要查找的单词，b是替换的单词

	getline(cin,s);	
	cin>>a;
	cin>>b;
	
	s=' '+s+' ';
	a=' '+a+' ';
	
	// 查找替换
	int i,j;
	for(i=0;i<s.length();){
		for(int j=0;j<a.length();){
			if(s[i]==a[j]){
				if(s[i]==' ' && i!=0) cout <<' ';
				i++;
				j++;
			}
			else{
				cout<<s[i];
				i++;
				j=0;
				break;
			}
			
			if(j==a.length()){
				cout<<b;
			}
		}
	}
	
	return 0;
}

