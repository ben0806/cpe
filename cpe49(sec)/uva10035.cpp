#include <iostream>
using namespace std;
int main(){
    long long a,b;
    int a1,b1;
    while(cin>>a>>b){
        int count=0;
        int carry=0;
        if(a==0&&b==0) break;
        while(a>0||b>0){
            a1=a%10;
            b1=b%10;
            a=a/10;
            b=b/10;
            if(a1+b1+carry>9){
                carry=1;
                count++;
            }
            else carry=0;
        }
        if(count==0){
            cout<<"No carry operation."<<endl;
        }
        else if(count==1){
            cout<<"1 carry operation."<<endl;
        }
        else{
            cout<<count<<" carry operations."<<endl;
        }
    }
}