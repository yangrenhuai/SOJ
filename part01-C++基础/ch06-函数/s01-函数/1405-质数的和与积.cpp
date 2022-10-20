//
// Created by Hello on 2022/9/24.
//

#include "iostream"
using namespace std;

int a[10001]={0};

void plist(){
    for(int i=2;i*i<=10000;i++){
        if(a[i]!=1){
            for(int j=2; i*j<=10000;j++){
                a[i*j]=1;
            }
        }
    }
}
int main(){
    int s,ans=0;
    cin >> s;

    plist();

    for(int i=1;i<s;i++){
        if(a[i]==0 && a[s-i]==0){
            ans=max(ans,i*(s-i));
        }
    }
    cout << ans;

    return 0;
}
