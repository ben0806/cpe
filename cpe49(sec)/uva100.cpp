#include <iostream>
using namespace std;
int main(){
int a,b;
    while(cin>>a>>b){
        cout<<a<<" "<<b<<" ";
        int count=0;
        if(a>b) swap(a,b);
        int result=0;
        for(int i=a;i<=b;i++){
            int count=0;
            int num=i;
            while(num!=1){
                if(num%2==0){
                    num/=2;
                    count++;
                }
                else{
                    num*=3;
                    count++;
                }
            }
            if(count>result){
                result=count;
            }
        }
        cout<<result<<endl;
    }
}