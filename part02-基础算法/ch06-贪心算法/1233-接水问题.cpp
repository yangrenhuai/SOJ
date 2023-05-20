#include <iostream>
#include <algorithm>
using namespace std;

int a[101]; 

int main(){
	int m,n; // m个水龙头，n个同学
	int v;
	
	cin >> n >> m;
	
	// 输入n个同学的接水量（也就是接水时间）
	for(int i=1;i<=n;i++){
		cin >> v;
		if(i<=m)
			a[i]=v;
		else{
			sort(a+1,a+m+1);
			
			// 到时间最小的水龙头接水
			a[i]=a[i]+v; 
		}
	}
	
	// 排序
	sort(a+1,a+m+1);
	
	cout << a[m];
	
	return 0;
}
