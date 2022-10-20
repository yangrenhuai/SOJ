#include <iostream>
#include <cmath>

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

// 转置n
int turn(int n){
	int t=0;
	while(n>0){
		t=t*10+n%10;
		n=n/10;
	}
	return t;
}

int main(){
	plist();
	
	int m,n;
	cin>>m>>n;
	
	int count=0;
	for(int i=m;i<=n;i++){
		if(a[i]==0 && a[turn(i)]==0){
			count++;
			if(count==1){
				cout << i;
			}
			else{
				cout << ","<<i;
			}
			
		
		}
	}
	if(count ==0 ) cout<<"No";
	
	return 0;
}
