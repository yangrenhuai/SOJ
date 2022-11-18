#include <iostream>
using namespace std;

int main(){
	int a[1000001]={0,1,2};
	
	for(int i=3;i<=1000000;i++){
		a[i]=(2*a[i-1]+a[i-2])%32767;
	}
	
	int n;
	cin>>n;
	while(n>0){
		int x;
		cin >>x;
		cout<<a[x]<< endl;
		n--;
	}
}

