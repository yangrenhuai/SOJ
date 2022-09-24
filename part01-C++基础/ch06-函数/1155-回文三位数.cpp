//
// 1155-回文三位数
//

#include "iostream"
#include "cmath"
using namespace std;

//判断大于等于2的整数n是否是质数
bool isPrime(int n)
{
    for(int i = 2; i <= sqrt(n); ++i)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}

int main(){
    for(int i=100;i<1000;i++){
        if(i/100==i%10 && isPrime(i)){
            cout << i << endl;
        }
    }
}
