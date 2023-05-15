#include <iostream>
#include <cstring>
using namespace std;

char a[40][40];//
int b[40][40]={0}; //标记是否被传染,0表示未传染，1-表示传染了

int main(){
	int n,m; //n表示行列 m分钟
	cin >> n >> m;
	
	// 读入数据
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	}
	
	while(m--){
		memset(b,0,sizeof(b));
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(a[i][j]=='X' && b[i][j]==0){
					if(a[i][j-1]=='P'){
						a[i][j-1]='X';
						b[i][j-1]=1;
					}
					if(a[i][j+1]=='P'){
						a[i][j+1]='X';
						b[i][j+1]=1;
					}
					if(a[i-1][j]=='P'){
						a[i-1][j]='X';
						b[i-1][j]=1;
					}
					if(a[i+1][j]=='P'){
						a[i+1][j]='X';
						b[i+1][j]=1;
					}
				}
			}
		}
	}
	
	int ans=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]=='X') ans++;
		}
	}
	
	cout<<ans;
	
	return 0;
}
