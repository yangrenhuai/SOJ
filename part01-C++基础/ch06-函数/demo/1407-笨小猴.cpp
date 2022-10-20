#include <iostream>
using namespace std;

//1.定义一个函数，实现判断一个数是否是质数
bool isPrime(int n){
	if(n==0 || n==1) return false;
	
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
}
//2.需要定义一个函数，实现记录每一个单词出现的次数
int nums[125]={0};
void f(string s){
	for(int i=0;i<s.length();i++){
		nums[(int)s[i]]++;
	}
}

int getMax(){
	int t=nums[0];
	for(int i=97;i<123;i++){
		if(t<nums[i]) t=nums[i];
	}
	return t;
}

int getMin(){
	int t=999;
	for(int i=97;i<97+26;i++){
		if(t>nums[i] && nums[i]!=0) t=nums[i];
	}
	return t;
}

int main(){
	string word;
	cin>>word;
	
	f(word);
	
	int max=getMax();
	int min=getMin();
	if(isPrime(max-min)){
		cout<<"Lucky Word" << endl<<max-min;
	}
	else{
		cout<<"No Answer" << endl<<0;
	}
	
}
