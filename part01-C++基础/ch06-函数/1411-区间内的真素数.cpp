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

bool isPrime(int n){
	int t1,t2=0;
	t1=n;
	int i=0;
	
	// 计算位数
	while(t1>0){
		t1=t1/10;
		i++;
	}
	
	while(i>0){
		
	}
	
	cout<<n<<" "<<t2 << endl;

	if(a[n]==0 && a[t2] ==0 ) return true;
	return false;
}

int main(){
	plist();
	
	int m,n;
	cin>>m>>n;
	
	int count=0;
	for(int i=m;i<=n;i++){
		if(isPrime(i)){
			count++;
			if(count==1){
				cout << i;
			}
			else{
				cout << ","<<i;
			}
			
		
		}
	}
	
	return 0;
}
