#include <iostream>
using namespace std;

int a[5001]={0};

void plist(){
	a[0]=1;
	a[1]=1;
	for(int i=2;i*i<=5000;i++){
		for(int j=2;i*j<=5000;j++){
			if(a[i*j]!=1) a[i*j]=1;
		}
	}
}

// 计算n的最大质因子
int getMax(int n){
	int maxn=2;
	for(int i=3;i<=n;i++){
		if(n%i==0){
			if(a[i]==0) maxn=i;
		}
	}	
	
	return maxn;
}

int main(){
	plist();
	
	int m,n;
	cin>>m>>n;
	 
	for(int i=m;i<=n;i++){
		if(i==m)
			cout << getMax(i);
		else
			cout<<","<<getMax(i);
	}
	
	return 0;
}
