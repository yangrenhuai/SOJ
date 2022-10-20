#include <iostream>
#include <cmath>
using namespace std;


// i表示位数
void f(int n,int i) {
	if(n/10==0) {
		cout<<n;
		return;
	}
		
	else
	{
		f(n,i+1);
	}
	cout<<n%10;	
}

int main() {
	int n;
	cin >> n;
	f(n,1);
}
