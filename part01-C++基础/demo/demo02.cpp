#include <iostream>
using namespace std;

int main(){
	int a; //a应该有地址 使用&a表示a的地址
	a=5;   //往a中存放5
	char b; //&b表示b的地址
	
	printf("%x\n",&a); //输出变量a的地址
	printf("%d\n",a);  // cout<<a;
	
	
	int c[10]; //表示在内存中存放数组c
	printf("%x\n",&c[0]); 
	printf("%x\n",&c[1]); 
}
