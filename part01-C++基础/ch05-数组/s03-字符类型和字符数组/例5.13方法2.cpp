#include <iostream>

int main(){
	for(int i=97;i<=97+25;i+=2){ //97表示的字符'a'
		printf("%c  ",i);
	}
	
	for(int i=97+25;i>=97;i-=2){ //97表示的字符'a'
		printf("%c  ",i);
	}
	return 0;
}
