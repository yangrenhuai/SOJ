#include <bits/stdc++.h>
using namespace std;

int n,x;
int a[1000001]={0,1,2};
int f(int n){
	if(a[n]!=0 ) 
		return a[n];
	else {
		a[n]= ((2*f(n-1))+f(n-2))%32767;
		return a[n];
	}
	
}

int main(){
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> x;
		cout << f(x) << endl;
	}
	return 0;
}
