/**
 * 1401：机器翻译
 * 思路：
 * 1.定义整形数组a表示内存
 * 2.定义整型数组b表示单词
 * 3.定义函数bool nc(int x)查找单词是否在内存中，在返回true，不在返回false
 * 4.
 */

#include "iostream"
using namespace std;

int a[10005];
int m; // 内存容量
int n; // 单词个数
int ans; // 到外存中查找单词次数
int k; // 每一次读入的单词
int len1 ; // 当前内存中存放的单词个数

bool nc(int x){
    for(int i=1;i<=m;i++){
        if(a[i]==x) return true;
    }
    return false;
}

int main(){
    cin >> m >> n;

    for(int i=0;i<10005;i++) a[i]=-1;

    for(int i = 1; i<=n;i++){
        cin >> k;
        if(!nc(k)){
            ans++;

            // 将新单词放到内存中
            if(len1 < m){
                len1 ++ ;
                a[len1]=k;
            }
            else {
                //删除内存中的第一个单词，其余单词依次前移
                for(int j=0;j<m;j++){
                    a[j]=a[j+1];
                }
                a[m]=k;
            }
        }
    }

    // 输出
    cout << ans;

    return 0;
}

