/*
方法2
*/


#include <iostream>

using namespace std;

int a[10001]={0};
int n;//n个数字
int x;//要查找的数x
int main() {
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;//读入一个数
        if(a[x]==0) a[x]=i;
    }

    //读入要查找的数
    cin>>x;
    if(a[x]==0)
        cout<<-1<<endl;
    else
        cout<<a[x]<<endl;

    return 0;
}
