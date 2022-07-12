//
// 1157-哥德巴赫猜想
//

#include "iostream"
#include "cmath"
using namespace std;

bool isPrime(int x)
{
    //判断x是否是素数
    if(x<2) return false; //2之前的不是素数
    for(int i=2;i<=sqrt(x);i++) //最小的素数是2
    {
        if(x%i==0) return false;  //只要出现余数为0的情况，就不会是素数
    }
    return true;  //剩下的数都是素数
}
void split(int x)
{
    //拆分数字x，从2开始拆分
    for(int i=2;i<x;i++)  //先遍历第一个数
    {
        int i2=x-i;  //得到第二个数
        if(isPrime(i)&&isPrime(i2))  //两个数分别进行素数的判断
        {
            //两个数都是素数的情况下才能输出
            printf("%d=%d+%d\n",x,i,i2);
            break;  //跳出循环，保证最小的素数在前面
        }
    }
}
int main()
{
    //将偶数遍历出来
    for(int i=6;i<=100;i+=2)
    {
        split(i);  //调用拆分函数
    }
    return 0;
}
