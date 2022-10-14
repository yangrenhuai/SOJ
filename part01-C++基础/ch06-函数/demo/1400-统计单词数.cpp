#include <iostream>
using namespace std;

int main(){
	string str[100000],s;
	int len=0;
	
	while(cin>>s){
		// 将所有单词转换为小写
		for(int i=0;i<s.size();i++){
			s[i]=tolower(s[i]);
		}
		str[len]=s;
		len++;
	}
	
	int ans=0;
	int pos=-1;
	for(int i=1;i<len;i++){
		if(str[i]==str[0]){
			ans++;
			if(ans==1) pos=i-1;
		}
	}
	
	if(ans>0){
		cout<<ans<<" "<<pos<<endl;
	}
	else{
		cout<<-1<<endl;
	}
}
