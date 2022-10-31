#include <iostream>
using namespace std;

int turn=0;
void f(int n){
	if(n==0) 
		return;
	else {
		turn=turn*10+n%10;
		f(n/10);
	}
		
}

int main(){
	int n=123;
	f(n);
	cout<<turn;
}
