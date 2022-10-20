/*

 1406-字符串数组

*/
#include "iostream"
using namespace std;

int main(){
    string str[200];
    string temp;

    // 读入所有数据到字符串数组str中
    int len=0;
    while(cin>>temp){
		cout << temp << endl;
        str[len]=temp;
        len++;
    }

    for(int i=0;i<len-2;i++){
        if(str[i]==str[len-2])
            cout<< str[len-1] << " ";
        else
            cout<< str[i] << " ";
    }
    return 0;
}
