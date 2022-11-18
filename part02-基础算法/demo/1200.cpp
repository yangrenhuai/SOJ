#include <iostream>
#include <cmath>
using namespace std;

int ans=1;

//计算机n被k分级的次数
void f(int n,int k){
	if(n<=k) return;
	for(int i=k;i<=sqrt(n);i++){
		if(n%i==0){
			ans++;
			f(n/i,2);
		}
	}
}

int main(){
	int n;
	cin >> n;
	
	while(n>0){
		int x;
		cin >> x;
		
		ans=1;
		f(x,2);
		cout<<ans<<endl;
		
	}
}
