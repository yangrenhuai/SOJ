#include <iostream>
#include <cmath>
using namespace std;

double f(double x,int n){
	if(n==1) 
		return sqrt(1+x);
	else
		return sqrt(n+f(x,n-1));
}

int main(){
	double x;
	int n;
	cin >> x>> n;
	
	printf("%.2f",f(x,n));
}

