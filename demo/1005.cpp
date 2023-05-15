#include <stdio.h>

int main(){
	int r;
	float pi=3.1415926;
	
	scanf("%d",&r);
	
	float s=0,c=0;
	s=pi*r*r;
	c=2*pi*r;
	
	printf("%.2f\n%.2f",s,c);
	
	
	return 0;
}
