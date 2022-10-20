#include <iostream>
using namespace std;

char f(int n){
	int count0=0,count1=0;
	while(n>0){
		if(n%2==1){
			count1++;
		}
		else{
			count0++;
		}
		n=n/2;
	}
	
	if(count1>count0)
		return 'A';
	else
		return 'B';
}

int main(){
	int ansA=0;
	int ansB=0;
	for(int i=1;i<=1000;i++){
		if(f(i)=='A') 
			ansA++;
		else
			ansB++;
	}
	cout<< ansA<<" "<<ansB<<endl;
}
