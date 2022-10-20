//
// 1397：简单算术表达式求值
//
#include "iostream"
using namespace std;

int cal(int x,char op,int y)
{
    if(op == '+')	return x + y;
    if(op == '-')	return x - y;
    if(op == '*')	return x * y;
    if(op == '/')	return x / y;
    if(op == '%')	return x % y;
}

int main(){
    int x,y;
    char z;

    cin >> x >> z >> y;//x、y为运算数，z为运算符
    cout << cal(x,z,y) << endl;//根据z进行计算，输出结果
    return 0;
}