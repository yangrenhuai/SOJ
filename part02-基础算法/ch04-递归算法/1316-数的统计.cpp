#include <iostream>
using namespace std;

int ans=0;

void f(int ori){
	ans++;
	for(int i=1;i<=ori/2;i++){
		f(i);
	}
}

int main(){
	int n;
	cin>>n;
	f(n);
	
	cout << ans;
	
	return 0;
}

