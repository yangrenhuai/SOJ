//
// Created by 杨仁怀 on 2022-07-12.
//

#include <iostream>

using namespace std;

double getMax(int x,int y,int z)
{
    if(x<y) x=y;
    if(x<z) x=z;
    return x;
}


int main(){
    double a,b,c,m;
    cin>>a>>b>>c;
    m=getMax(a,b,c)/(getMax(a+b,b,c)*getMax(a,b,b+c))*1.0;
    printf("%.3lf",m);
    return 0;
}