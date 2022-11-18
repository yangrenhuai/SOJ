#include <iostream>
using namespace std;

int a[1000001]={0,1,2};

int pell(int n){
	if(a[n]!=0) return a[n];
	a[n]=(2*pell(n-1)+pell(n-2))%32767;
	return a[n];
}

int main(){
	int n;
	cin >> n;
	
	while(n>0){
		int x;
		cin >> x;
		cout << pell(x) << endl;
		
		n--;
	}
	return 0;
}
