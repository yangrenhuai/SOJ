#include <iostream>
#include <cmath>
using namespace std;


// i表示位数
void f(int n) {
	cout<<n%10;	
	if(n/10!=0) {
		f(n/10);
	}
}

int main() {
	int n;
	cin >> n;
	f(n);
}
