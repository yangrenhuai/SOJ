#include <bits/stdc++.h>
using namespace std;

// 判断质数
bool isPrime(int n){
	if(n==0 || n==1 )
		return false;
	for(int i=2;i<=n/i;i++)
		if(n%i==0) return false;
	return true;
}

// 判断回文数
bool isHw(int n){
	if(n<100){
		if(n%11==0) return true;
	}
	else{
		if(n%10==n/100) return true;
	}
	return false;
}

int main(){
	int n,ans=0;
	cin>> n;
	for(int i=11;i<=n;i++){
		if(isPrime(i) && isHw(i)) ans++;
	}
	
	cout << ans<< endl;
	return 0;
}

