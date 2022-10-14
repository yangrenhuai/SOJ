#include <iostream>
using namespace std;

int a[100001]={0};
int main(){
	a[1]=1;
	for(int i=2;i*i<=100000;i++){
		for(int j=2;i*j<=100000;j++){
			if(a[i*j]==0)
				a[i*j]=1;
		}
	}
	
	int x,y,ans=0;
	cin >>x >> y;
	for(int i=x;i<=y;i++){
		if(a[i]==0) ans++;
	}
	cout<< ans;
	
	return 0;
}

