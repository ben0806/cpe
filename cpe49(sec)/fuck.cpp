#include <iostream>
using namespace std;
int main(){
    long long n;
    while(cin>>n){
        if(n==0)break;
        int count=1;
        while(n>1){
            if(count==100) break;
            if(n%2==0){
                n/=2;
            }
            else{
                n=3*n+1;
            }
            count++;
        }
        if(count!=100){
            cout<<"1"<<endl;
        }
        else{
            cout<<n<<endl;
        }
    }
}