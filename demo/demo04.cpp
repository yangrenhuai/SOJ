#include <stdio.h>

int main(){
	int a[2][3]={1,2,3,4,5,6};
	int (*p)[3];
	p=a;
	
	printf("%d\n",*(*p+1));
	
	char p3[10];
	
	
	char *p1="hello";
	char *p2;
	p2="hello";
	
	puts(p2);
	
	return 0;
}



