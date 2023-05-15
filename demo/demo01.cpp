#include <stdio.h>
#include <string.h>
#include "demo02.cpp"

void f2(int a,int b){

}

void f1(int t[]){
	
}

int main(){

	int x=10;
	int y=5;
	
	f2(x,y);
	
	int c[5]={1,2,3,4,5};
	f1(c);
	
	printf("%x\n",c);
	printf("%x\n",&(c[1]));
	
	return 0;
}
