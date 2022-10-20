#include <iostream>
using namespace std;

int main(){
	long n;
	cin >> n;
	
	long s=0;
	for(int i=1;i<=500;i++){
		//假设i表示现在总共有i家
		s=s+i;		
		for(int j=1;j<=i;j++){
			if(s-3*j==n){
				cout << j << " " << i << endl;
			}
		}
	}
}
