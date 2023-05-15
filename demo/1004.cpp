#include <stdio.h>

int main(){
	int sum=1;  //定义变量sum
	int n;
	
	// 从键盘上输入n
	scanf("%d",&n);
	
	// 验证n 的范围
	if(n<0 || n>10){
		printf("n值错误");
	}
	else{
		// 
		for(int i=1;i<=n;i=i+1){
			sum*=i;
		}
		
		printf("%d",sum);
	}

	return 0;
}
