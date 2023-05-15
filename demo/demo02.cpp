#include <stdio.h>
#define N 10
#define add2(a,b) a*b
#define IBM_PC

int add(int x,int y){
	return x+y;
}

int main(){
	struct x{
		double a;
		int b;
	};

	
	int a=4;
	int b=5;
	int r=add(a,b);
	r=add2(3+5,b); // r=a+b;
	
	
	r=a+b;
	
	
	return 0;
}
