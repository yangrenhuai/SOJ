#include <iostream>
using namespace std;

int a[100001]={0};

void plist(){
	a[0]=1;
	a[1]=1;
	for(int i=2;i*i<=100000;i++){
		for(int j=2;i*j<=100000;j++){
			if(a[i*j]!=1) a[i*j]=1;
		}
	}
}

int main(){
	plist();
	
	int x,y;
	int ans=0;
	
	cin>> x >> y;
	for(int i=x;i<=y;i++){
		if(a[i]==0) ans++;
	}
	
	cout << ans;
	return 0;
}
