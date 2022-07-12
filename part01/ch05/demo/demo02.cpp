/*
期末成绩        int  score1
班级评议成绩    int score2
论文的数量      int n
西部省份        char c1
学生干部        char c2
学生的名字      char name[30]
int x; //总数
*/

#include "iostream"
#include "cstring"
using namespace std;

char name[30];
int score1,score2,n; //scor1表示平均成绩  score2评议成绩
char bgb,xb; // bgb班干部  xb西部省份
char maxname[30];  //存放奖学金最多的学生姓名
int jxj,maxjxj;  // 一个学生的奖学金  最大的奖学金
int total;//所有学生的奖学金的总量
int main(){
    int x;
    cin>>x;

    //YaoLin 87 82 Y N 0
    for(int i=0;i<x;i++){
        jxj=0;
       cin>>name>>score1>>score2>>bgb>>xb>>n;
       //期末平均成绩高于80分（>80），并且在本学期内发表1篇或1篇以上论文的学生均可获得；
       if(score1>80 && n>=1) jxj+=8000;
       //期末平均成绩高于85分（>85），并且班级评议成绩高于80分（>80）的学生均可获得；
       if(score1>85 && score2>80) jxj+=4000;

       //成绩优秀奖，每人2000元，期末平均成绩高于90分（>90）的学生均可获得；
       if(score1>90) jxj+=2000;
       //西部奖学金，每人1000元，期末平均成绩高于85分（>85）的西部省份学生均可获得
        if(score1>85 && xb=='Y' )  jxj+=1000;
       //班级贡献奖，每人850元，班级评议成绩高于80分（>80）的学生干部均可获得
       if(score2>80 && bgb=='Y') jxj+=850;

       total+=jxj;

       //判断计算最大的奖学金
       if(jxj>maxjxj) {
           maxjxj=jxj;
           strcpy(maxname,name);
       }
    }

    //输出maxname      //输出maxjxj    //输出total
    cout<<maxname<<endl<<maxjxj<<endl<<total<<endl;
}