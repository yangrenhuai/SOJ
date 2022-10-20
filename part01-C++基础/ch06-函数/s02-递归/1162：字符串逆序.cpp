#include <iostream>
using namespace std;

string s;

void print(int i){
	if(s[i]!='!') //判断是否到达边界
		print(i+1);
	else
		return;
	cout<<s[i];
}

int main(){
	getline(cin,s);
	print(0);	
}
