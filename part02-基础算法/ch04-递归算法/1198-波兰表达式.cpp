//
// Created by 杨仁怀 on 2022-03-30.
//

#include <bits/stdc++.h>

using namespace std;
double calc(){
    string s;
    cin>>s;
    switch (s[0]) {
        case '+':  return calc()+calc();
        case '-':  return calc()-calc();
        case '*':  return calc()*calc();
        case '/':  return calc()/calc();
        default:   return atof(s.c_str());
    }
}
int main() {
    printf("%f",calc());
    return 0;
}
