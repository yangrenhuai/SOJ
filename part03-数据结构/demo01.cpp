#include <iostream>
#include <cstring>
using namespace std;


struct Student{
	string name;
	double score;
	Student *next;
};

int main(){
	Student *head=NULL; //表示空的头节点
	
	int n;  //n表示人数
	n=10;
	
	for(int i=0;i<n;i++){
		Student *p;
		p=new Student;
		p->next=NULL;
		//1.输入姓名
		p->name="yrh";
		//2.输入分数
		p->score=i;
		
		
		if(head==NULL){
			head=p;
		}
		else{
			Student *p2;
			p2=head;
			while(p2->next!=NULL){
				p2=p2->next;
			}
			p2->next=p;
		}
	}
	
	
	//输出链表
	Student *p3;
	p3=head;
	while(p3!=NULL){
		cout<< p3->name<<","<<p3->score<<endl;
		p3=p3->next;
	}
	return 0;
}
