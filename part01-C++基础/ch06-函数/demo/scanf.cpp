#include <iostream>
using namespace std;

int main(){
	int s=3871;
	int h=s/3600;
	int m=(s-h*3600)/60;   
	int s2=(s-h*3600)%60;
	
	printf("%0-2d:%02d:%02d\n",h,m,s2);
	
}
