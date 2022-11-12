#include <iostream>
#include <cmath>
using namespace std;

int ans;

void f(int n,int k){ // 从k开始分解n
	if(n<k) return;
	for(int i=k;i<sqrt(n);i++){
		if(n%i==0) {
			ans++;	
			f(n/k,i);
		}
	}
}

int main(){
	int n,x;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> x;
		
		ans=1;
		f(x,2);
		cout<< ans << endl;
	}
}
