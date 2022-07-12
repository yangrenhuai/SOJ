//
// 1156：求π的值
//

#include "iostream"
#include "cmath"
using namespace std;

double cal(double x);

int main()
{
    double a,pi;
    a = 1/sqrt(3);
    pi = 6 * (cal(a));
    printf("%.10lf\n",pi);
    return 0;
}

double cal(double x)
{
    // tmp分母
    double sum = 0,tmp = x;
    int i = 1;

    while(fabs(tmp / i) >= 1e-6)
    {
        sum += tmp / i; //和累加
        tmp=-1 * x * x * tmp; //分子 x 连乘 正负号错位
        i += 2;//分母相差2 的奇数
    }
    return sum;
}
