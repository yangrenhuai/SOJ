#include <iostream>
using namespace std;

/*
	f(n)=f(n-1)+n
	n==1; f(1)为1
*/
int f(int n){
	if(n==1) 
		return 1;
	else
		return f(n-1)+n;
}

int main(){
	int n;
	cin >> n;
	
	int ans=f(n);
	
	cout << ans;
	return 0;
}
