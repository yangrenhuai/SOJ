#include <iostream>
#include <vector>
using namespace std;

vector<string> op;
int sum=0;

void f(int index){
	double a,b;
	
	if(op.size()==1) {
		sum=atof(op.at(0).c_str());	
		return;
	}
	
	switch(op.at(index)[0]){
	case '+':
		a=atof(op[index-2].c_str());
		b=atof(op[index-1].c_str());
		op.erase(op.begin(),op.begin()+2);
		op.insert(op.begin(),to_string(a+b));
		f(index+1);
	case '-':
		a=atof(op[index-2].c_str());
		b=atof(op[index-1].c_str());
		op.erase(op.begin(),op.begin()+2);
		op.insert(op.begin(),to_string(a-b));
		f(index+1);
	case '*':
		a=atof(op[index-2].c_str());
		b=atof(op[index-1].c_str());
		op.erase(op.begin(),op.begin()+2);
		op.insert(op.begin(),to_string(a*b));
		f(index+1);
	case '/':
		a=atof(op[index-2].c_str());
		b=atof(op[index-1].c_str());
		op.erase(op.begin(),op.begin()+2);
		op.insert(op.begin(),to_string(a/b));
		f(index+1);
		default:
			f(index+1);
}
}

int main(){
	string s;
	getline(cin,s);
	
	int pos=-1;
	int start=0;
	while((pos=s.find(" ",start))>=0){
		op.push_back(s.substr(start,pos-start));
		start=pos+1;
	}
	op.push_back(s.substr(start,s.size()-start));
	
	f(0);
	
	cout<<sum;
	
	
	
	
	return 0;
} 
