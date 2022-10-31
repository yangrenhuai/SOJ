#include <iostream>
using namespace std;

int main(){
	int a;
	int b;
	int c;
	
	cin>>a>>b;  //输入的是3 5
	c=a+b;
	
	cout<<a<<"+"<<b<<"="<<c<<endl; //3+5=8
	printf("%d+%d=%d\n",a,b,c);
	
	long long d=999999999999999;
	printf("变量d的值是：%lld\n",d);
	
	double x=1.23;
	printf("x=%lf\n",x);
	
	char ch='c';
	printf("%c",ch);
}
