#include <iostream>
using namespace std;

int turn=0;
int f(int n){
	if(n==0)
		return 0;
	else{
		turn=turn*10+n%10;
		f(n/10);
		return turn;
	}
		
}

int main(){
	cout <<f(123);
}
