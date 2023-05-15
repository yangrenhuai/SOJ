#include <iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next; //指针域
};

Node *head=NULL;

void add(int x){
	if(head!=NULL){
		Node *a=new Node;
		a->data=x;
		a->next=NULL;
		
		// 从头节点开始查找最后一个节点
		Node *p=head;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=a;
	}
	else{
		head=new Node;
		head->data=x;
		head->next=NULL;
	}
}

void insert(int n,int x){
	// 构建新的节点
	Node *d=new Node;
	d->data=x;
	d->next=NULL;
	
	// 插入在头节点之前
	if(n==1){
		d->next=head;
		head=d;
	}
	else{
		Node *p=head;		
		for(int i=1;i<=n-2;i++){
			p=p->next;
			if(p==NULL){
				break;
			}
		}
		if(p==NULL){
			cout << "n值错误";
		}
		else{
			d->next=p->next;
			p->next=d;
		}
	}
}

void delData(int data){
	Node *p=head;
	Node *prev=NULL;
	
	while(p!=NULL){
		if(p->data==data){
			// 删除的是头节点
			if(p==head){
				head=p->next;
			}
			else{
				prev->next=p->next;
			}
			delete p;
			break;
		}
		
		prev=p;
		p=p->next;
	}
}

void delPos(int n){
	Node *p=head;
	Node *temp=NULL;
	
	if(n==1){
		if(head!=NULL){
			// 删除的是头节点
			head=p->next;
			delete p;
		}else{
			cout<< "空链表";
		}
	}
	else{
		for(int i=1;i<=n-2;i++){
			p=p->next;
			if(p==NULL) break;
		}
		if(p==NULL || p->next==NULL){
			cout<< "n的值有误!" << endl;	
		}
		else{
			temp=p->next;
			p->next=temp->next;
			delete temp;
		}
	}
}

void display(){
	Node *p=head;
	
	while(p!=NULL){
		cout<< p->data << endl;
		p=p->next;
	}
}

int main(){
	add(1);
	add(10);
	add(0);
	
	insert(3,20);
	
	display();
	
	return 0;
}
