#include <iostream>
using namespace std;

int a[101][101];

int main(){
	int t; // 有t组数据
	int m,n; //每一组数据有m行n列
	int sum=0;
	
	cin>>t;
	while(t>0){
		cin>>m>>n;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin >> a[i][j];
			}
		}
		
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				// 计算第一行的花生数量
				// 计算第一列的花生数量
				if(i==0 && j!=0) {
					a[i][j]+=a[i][j-1];
				}
				else if(j==0 && i!=0) {
					a[i][j]+=a[i-1][j];
				}
				else if(i!=0 && j!=0){
					a[i][j]+=max(a[i][j-1],a[i-1][j]);
				}
			}
		}
		cout<< a[m-1][n-1]<< endl;	
		
		
		t--;
	}
	
	return 0;
}

