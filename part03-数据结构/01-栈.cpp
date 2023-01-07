#include <iostream>
using namespace std;

//常量定义栈的长度
#define MAXN 5

int stack[MAXN];  //定义数组模拟栈
int top=-1;       //初始化栈顶指针

// 出栈
int pop(){
	int r;
	if(top <0){
		r=-1 ;
		cout << "栈为空!" << endl;
	}
	else{
		r= stack[top];
		top--;
	}
	return r;
}

// 入栈
void push(int value){
	if(top >=MAXN -1){
		cout << "栈已满" << endl;
	}
	else{
		top ++;
		stack[top] =value;
	}
}

// 显示栈
void display(){
	int i;
	for(i = top ;i >=0 ;i--){
		cout << stack[i] << " ";
	}
	cout << endl;
}

int main(){
	int order ;  // 指令
	int x, t;
	cout << "请输入指令:";
	while(true){
		cout << "1:入栈，2：出栈，3：显示栈" << endl;
		cin >> order;
		if(order==1){
			cin >> x;
			push(x);
			display();
		}
		else if(order ==2){
			t=pop();
			if(t!=-1){
				cout << t << "出栈" << endl;
				display();
			}
		}
		else if (order ==3){
			display();
		}
	}
	
	return 0;
}
