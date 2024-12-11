#include <iostream>
#include <algorithm>
using namespace std;
int n,m;
bool LESS(int x,int y){
    if(x%m!=y%m)return x%m<y%m;
    if(abs(x%2)!=abs(y%2))return abs(x%2);
    if(abs(x%2)) return x>y;
    return x<y;
    }
int main(){
    int a[10001];
    while(cin>>n>>m){
        cout<<n<<" "<<m<<endl;
        if(n==0&&m==0)break;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n,LESS);
        for(int i=0;i<n;i++){
            cout<<a[i]<<endl;
        }
    }
    
}