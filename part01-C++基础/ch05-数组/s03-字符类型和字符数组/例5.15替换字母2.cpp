#include <iostream>
#include <cstring>

int main(){
	char ch[201];
	char a,b;
	int n=0;//表示输入的字符个数
	
	//scanf()  gets()
//	gets(ch);  //abc\0
	char c;
	while((c=getchar())!='\n'){
		ch[n]=c;
		n++;
	}
	
	scanf("%c",&a); //a=getchar();
	getchar();
	b=getchar(); //输入第二个字符

	int i=0;
	for(i=0;i<n;i++){
		if(ch[i]==a)  putchar(b);
		else putchar(ch[i]);
	}
}
