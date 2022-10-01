#include "iostream"
using namespace std;

int a[10000]={0};

void plist(){
	for(int i=2;i*i<=10000;i++){
		if(a[i]!=1){
			for(int j=2;i*j<=10000;j++) a[i*j]=1;
		}
	}
}
int main(){
	plist();
	 
	int s,ans=0;
	cin >> s;
	
	for(int i=1;i<s;i++){
		if(a[i]==0 && a[s-i]==0){
			if(ans<i*(s-i)) ans=i*(s-i);
		}
	}
	cout<< ans;
	
	return 0;
}
