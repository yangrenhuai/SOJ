#include <stdio.h>

int main(){
	
	int sum=0;
	for(int i=1;i<=200;i++){
		// 取出i的个位十位和百位
		int a,b,c;
		a=i%10;
		b=i/10%10;
		c=i/100;
		
		if(a==3 || b==3 || c==3){
			printf("i=%d\n",i);
			sum+=i;
		}
	}
	
	printf("sum=%d\n",sum);
	
	return 0;
}
