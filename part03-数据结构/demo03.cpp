#include <stdio.h>

int main(){
	int x=-1;
	++x||++x||++x||++x;
	printf("%d",x);
	return 0;
}
