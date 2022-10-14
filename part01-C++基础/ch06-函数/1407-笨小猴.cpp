#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	if(n==0 || n==1 )
		return false;
	for(int i=2;i<=n/i;i++)
		if(n%i==0) return false;
	return true;
}

int w[150];
int main(){
	string s;
	int maxn=0,minn=999;
	cin >> s;
	
	//统计字母出现的次数
	for(int i=0;i<s.size();i++)
		w[s[i]]++;
	
	for(int i='a';i<='z';i++){
		maxn=max(maxn,w[i]);
		if(w[i]<minn && w[i]!=0) minn=w[i];
	}
	
	if(isPrime(maxn-minn)){
		cout<<"Lucky Word"<<endl<<maxn-minn;
	}
	else{
		cout<<"No Answer"<<endl<<0;
	}
}

