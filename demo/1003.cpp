#include <stdio.h>

int main(){
	int sum=0;  //定义变量sum，用来保存1+...+n的和
	int n;
	
	// 从键盘上输入n
	scanf("%d",&n);
	
	// 循环累加1+2.。。+n
	for(int i=1;i<=n;i=i+1){
		if(i%2==0)
			continue;
		
		sum=sum+i;
	}
	
	printf("%d",sum);
	return 0;
}
