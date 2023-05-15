#include <iostream>
#include <cstring>
using namespace std;


struct Node{
	int data;   //数据域
	Node *next; //指针域
};

// 头节点，指向NULL
Node *head=NULL;

void add(int x){
	Node *p=new Node; //表示创建一个新的节点
	p->data=x;
	p->next=NULL;
	
	if(head==NULL){
		head=p;
	}
	else{
		//新插入的节点应该在链表的末尾
		Node *p2=head;
		while(p2->next!=NULL){
			p2=p2->next;
		}
		
		//如果循环执行完后，p2一定是最后一个节点
		p2->next=p;
	}
}

void insert(int n,int x){
	// 首先构建要插入的节点
	Node *a=new Node;
	a->data=x;
	a->next=NULL;
	
	if(n==1){
		a->next=head;
		head=a;
	}
	else{
		Node *p=head;
		for(int i=1;i<=n-2;i++){
			p=p->next;
			if(p==NULL) break;
		}
		
		if(p!=NULL){
			// 循环结束后，p就是要插入的节点之前的节点
			a->next=p->next;
			p->next=a;
		}
		else{
			cout<<"位置是错误的"<<endl;
		}
	
	}
}

void deldata(int data){
	
}

void delpost(int n){
	if(n==1){
		Node *p=head;
		if(head!=NULL){
			head=head->next;
			delete p; //清除内存
		}
		else{
			cout<< "链表为空"<<endl;
		}
	}
	else{
		Node *p=head;
		for(int i=1;i<=n-2;i++){
			p=p->next;
			if(p==NULL) break;
		}
		
		if(p==NULL || p->next==NULL){
			cout<<"位置错误";
		}
		else{
			Node *t=p->next;
			p->next=t->next;
			delete t;
		}
	}
}

void display(){
	Node *p=head;
	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<endl;
}

int main(){
	add(5);  //将数据5加入到链表中
	add(6);
	add(3);
	insert(2,10); // 5 10 6 3
	insert(2,9); //  5 9 10 6 3
	display();
	
	delpost(1);  //  9 10  6   3
	display();
	
	delpost(2); // 9  6  3;
	display();
	return 0;
}
