//
// Created by 杨仁怀 on 2022-05-28.
//

#include <iostream>
using namespace std;

void f(int n,int p){
    if(n==0) return;
	int r=n%2; //r为n对2取余
	n=n/2;
	f(n,p+1); // 向下递归
	if(n!=0 && r==1) cout<<'+'; //最后一个不用输出+号分隔
	if(r==1){
		//cout<<"2("<<p<<")";
		if(p==0) cout<<"2(0)";
		else if(p==1) cout<<"2";
		else if(p==2) cout<<"2(2)";
		else{
			cout<<"2(";
			f(p,0);
			cout<<")";
		}
	}
}
int main() {
    int n;
	cin >> n;
	f(n,0);
    return 0;
}
