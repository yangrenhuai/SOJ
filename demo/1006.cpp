#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		for(int k=1;k<=3;k++){
			//1.先输出n-i空格
			for(int j=1;j<=n-i;j++){
				printf(" ");
			}
			
			//2.再输出2*i-1
			for(int j=1;j<=2*i-1;j++){
				printf("*");
			}
			
			//3.再次输出n-i个空格
			for(int j=1;j<=n-i;j++){
				printf(" ");
			}	
		}
		
		//4.换行
		printf("\n");
	}
	return 0;
}
