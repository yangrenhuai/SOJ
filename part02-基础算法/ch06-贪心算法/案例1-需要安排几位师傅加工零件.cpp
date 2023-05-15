#include <iostream>
#include <algorithm>
using namespace std;

// 辅助降序排序函数
bool cmp(int a,int b){
	if(a>b) 
		return true;
	else
		return false;
}

// 师傅加工零件的数量
int a[101];
int main(){
	int m,n;
	cin>> m >> n;
	
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	
	// 降序排序
	sort(a,a+n,cmp);
	
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
		
		// 判断人数是否足够
		if(sum>=m){
			cout << i+1;
			break;
		}
	}
	
	if (sum<m){
		cout << "NO";
	}
	
	return 0;
}
