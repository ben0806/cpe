#include <iostream>
using namespace std;
int GCD(int a,int b){
    while(a%b!=0){
        int temp=a%b;
        a=b;
        b=temp;
    }
    return b;
}
int main(){
    int n;
    while(cin>>n){
        if(n==0)break;
        int G=0;
        for(int i=1;i<n;i++){
            for(int j=i+1;j<=n;j++){
                G+=GCD(i,j);
            }  
        }
    }
}