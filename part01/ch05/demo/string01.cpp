/*
string 类
*/
#include "iostream"
using namespace std;

int main(){
    string str1("hello");
    cout << str1 << endl;

    string str2="hello"; //C语言风格初始化
    cout<< str2 << endl;

    string str("Hello,World!");
    string subStr = str.substr(0,5);
    cout << subStr << endl;

    //substring
    string str4("cat,dog,cat,pig,little cat,hotdog,little pig,angry dog");
    int index = str4.find("cat",0);

    if (index == string::npos) {
        printf("没有找到字符串\n");
    }

    if (index != string::npos) {
        cout << "在索引 " << index << " 处找到字符串" << endl;
    }
    str4.erase(0,1);
    cout<<str4<<endl;
    return 0;
}
