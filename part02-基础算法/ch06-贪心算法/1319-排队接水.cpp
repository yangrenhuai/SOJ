#include <bits/stdc++.h>//万能头文件就是它
using namespace std;

const int N = 1010;

int n;

struct node{
	int a;//输入的数
	int b;//下标
}s[N];

// 辅助排序函数，由小到大
bool cmp(node x, node y){
	return x.a < y.a;
}
int main(){
	cin >> n;
	for(int i = 1; i <= n; i ++ ) cin >> s[i].a, s[i].b = i;
	
	sort(s + 1, s + 1 + n,cmp);//调用函数，实现排序
	
	for (int i = 1; i <= n; i ++ ) {
		cout << s[i].b <<' ';
	}
	cout << endl;
	
	double sum = 0;
	for (int i = 1; i <= n; i ++ ){
		sum += s[i].a * (n - i);//公式的应用
	}
	
	printf("%.2lf\n", sum / n);
	
	return 0;
	
}
