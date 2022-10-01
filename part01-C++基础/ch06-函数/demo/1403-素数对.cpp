#include <iostream>
#include <cmath>
using namespace std;

int a[10001]={0}; // 表示a中所有的数据都是素数

// 判断n是不是素数，如果你是素数，返回0，否则返回1
int f(int n){
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0) return 1;
	}
	return 0;
}
int main(){
	int n ;
	cin >> n;
	
	// 判断n是不是素数，循环n-2次
	// 依次让n除以2...n-1，如果都除不尽，说明n是素数
	// 
	int r;
	for(int i=1;i<=10000;i++){
		a[i]=f(i);
	}
	
	for(int i=2;i<n;i++){
		if(a[i]==0 && a[i+2]==0 && i+2<=n){
			cout << i << " " << i+2 << endl;
		}
	}
	return 0;
}
