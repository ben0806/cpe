#include <iostream>
using namespace std;
int f(int x){
    int sum=0;
    while(x>0){
        sum+=x%10;
        x/=10;
    }
    if(sum<10) return sum;
    else return f(sum);
}
int main(){
    
    int a;
    while(cin>>a){
        if(a==0){
            break;
        }
        cout<<f(a)<<endl;
    }
}