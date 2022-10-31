#include <iostream>
using namespace std;

char chars[16]={'0','1','2','3','4','5','6','7','8','9',
'A','B','C','D','E','F'};

//函数的意思是输出某一个数的二进制
void f(int n,int m){
	if(n/m!=0)
		f(n/m,m);
	cout<<chars[n%m];
}

int main(){
	int n,m;
	cin>>n>>m;
	f(n,m);
}
