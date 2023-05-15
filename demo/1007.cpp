#include <stdio.h>

int main(){
	char ch;
	int count=0;
	//scanf("%c",&ch);
	
	while((ch=getchar())!='.'){
		if(ch>='A' && ch<='Z'){
			count++;
		}
	}
	
	printf("%d",count);
	return 0;
}
