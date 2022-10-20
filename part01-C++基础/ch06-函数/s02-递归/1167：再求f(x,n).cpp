#include <iostream>
using namespace std;

double f(int x,int n){
	if(n==1)
		return x*1.0/(1+x);
	else
		return x*1.0/(n+f(x,n-1));
}

int main(){
	int n,x;
	cin >> x >> n;
	
	printf("%.2f",f(x,n));
}
