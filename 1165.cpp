#include <iostream>
using namespace std;

double hn(int n, int x){
	if(n==0) return 1;
	if(n==1) return 2*x;
	if(n>1)  
		return 2*x*hn(n-1,x)-2*(n-1)*hn(n-2,x);
}

int main(){
	int n,x;
	cin>>n>>x;
	
	double r=hn(n,x);
	
	printf("%.2f",r);
	return 0;
}
