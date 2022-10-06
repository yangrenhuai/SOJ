#include <iostream>
using namespace std;

int main(){
	string strs[200];
	string s;
	
	int len=0;
	while(cin>>s){
		strs[len]=s;
		len++;
	}

	for(int i=0;i<len;i++){
		cout<< strs[i]<<endl;
	}
	
	return 0;
}

