#include <iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int prime=0;
        int emirp=0;
        for(int i=2;i<n;i++){
            if(n%i==0){
                prime++;
                break;
            }
        }
        int rev=0;
        int temp=n;
        while(temp>0){
            rev*=10;
            rev+=temp%10;
            temp/=10;
        }
        for(int i=2;i<rev;i++){
            if(rev%i==0){
                emirp++;
                break;
            }
        }
        if(prime==0&&emirp==0){
            cout<<n<<" is emirp."<<endl;
        }
        else if(prime==0&&emirp==1){
            cout<<n<<" is prime."<<endl;
        }
        else if(prime==1){
            cout<<n<<" is not prime."<<endl;
        }
    }
}