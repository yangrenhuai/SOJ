#include <iostream>
using namespace std;

long long  f(long long n){
	if(n==1 ) return 1;
	else if(n==2)  return 2;
	else{
		return f(n-1)+f(n-2);
	}
}

int main(){
	int n;
	
	while(cin >> n){
		cout<<f(n)<< endl;
	}
	

	return 0;
}
