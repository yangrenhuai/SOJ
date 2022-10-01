#include <iostream>
using namespace std;
// 判断x是否是完全数，如果是返回 ，否则返回0
int f(int x){
	int sum=0;
	for(int i=1;i<x;i++){
		if(x%i==0) sum=sum+i;
	}
	if(sum==x) return 1;
	return 0;
}

int main(){
	int n;
	cin >> n;
	
	for(int i=2;i<=n;i++){
		if(f(i)==1){
			cout << i << endl;
		}
	}
}
