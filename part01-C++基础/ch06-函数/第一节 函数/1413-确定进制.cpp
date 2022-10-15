#include <iostream>
#include <cmath>
using namespace std;

// 将n进制的数x转换为10进制
long long  f(long  x,long  n){
	long t=0;
	long i=0;
	while(x>0){
		t=t+(x%10)*pow(n,i);   // 按权相加法累加
		i++;
		x=x/10;
	}
	return t;
}
int main(){
	long p,q,r;
	cin>> p>> q >> r;
	for(int i=2;i<=30;i++){
		if(f(p,i)*f(q,i)==f(r,i)){
			cout << i ;
			return 0;
		}
	}
	
	cout << 0;
	
	return 0;
}
