//
// 1399-甲流病人初筛
// 思路：封装一个函数，函数功能温度>37.5并且会咳嗽（1表示）就是确诊，否则不是。如果是则输出用户姓名和统计数+1，最后输出确诊总人数的值。
//

#include<iostream>
#include<string>
using namespace std;
bool pd(float x,int y);

int main()
{
    int n;
    float temperature; // 体温
    int cough; // 是否咳嗽
    string name; //姓名
    int sum=0;
    int i;

    cin >> n;//输入病人数
    for(i = 1;i <= n;i++){ //依次输入姓名、体温、是否咳嗽,并判断
        cin >> name >> temperature >> cough;
        if(pd(temperature,cough))//进行判断
        {
            cout << name << endl;//输出姓名
            sum++;//总数+1
        }
    }

    cout << sum << endl;//输出总数
    return 0;
}
bool pd(float x,int y)
{
    if((x >= 37.5) && (y==1))
        return true;
    else
        return false;
}


