#include "iostream"
using namespace std;

int a[10001]={0};
//就是用筛法来计算10000以类所有的素数
void plist(){
	for(int i=2;i*i<=10000;i++){
		if(a[i]!=1){
			for(int j=2;i*j<=10000;j++) a[i*j]=1;
		}
	}
}
int main(){
	plist();
	
	return 0;
}
