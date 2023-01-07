#include "iostream"
using namespace std;

#define MAXN 5

// 定义数组模拟队列
int queue[MAXN]={0};

int front=0; //头指针
int rear=0; //尾指针

// 入队
void addqueue(int value){
    if(rear>=MAXN){
        cout << "队列满" << endl;
    }
    else{
        queue[rear]=value;
        rear++; // 尾指针增加
    }
}

// 出队
int delqueue(){
    int r;
    if(front==rear){
        cout << "队列为空" << endl;
        r=-1;
    }
    else{
        r=queue[front];
        front ++;
    }

    return  r;
}

// 显示队列
void display(){
    int i;
    for(i=front;i<rear;i++){
        cout << queue[i] << " ";
    }
    cout << endl ;
}

int main(){
    int order; //指令
    int value ,t;
    cout << "请输入指令：";

    while(true){
        cout << "1:入栈，2：出栈，3：显示队列" << endl;
        cin >> order;

        if(order ==1 ){
            cin >> value;
            addqueue(value);
            display();
        } else if(order==2){
            t=delqueue();
            if(t!=-1){
                cout << t << "已经出队" << endl;
                display();
            }
            else{
                cout <<"队列已空" << endl;
            }
        } else if(order ==3){
            display();
        } else{
            cout << "口令错误" << endl;
        }
    }
}
