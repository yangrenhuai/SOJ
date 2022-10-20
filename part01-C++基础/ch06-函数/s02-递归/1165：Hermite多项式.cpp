#include <iostream>
using namespace std;

double h(int x,int n){
	if(n==0) return 1.0;
	if(n==1) return 2.0*x;
	
	if(n>1)
		return 2*x*h(x,n-1)-2*(n-1)*h(x,n-2);
}

int main(){
	int n,x;
	cin>>n>>x;
	
	printf("%.2f", h(x,n));
}
