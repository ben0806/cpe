#include <iostream>
#include <iomanip>
using namespace std;
void a(long long x){
    if(x/10000000!=0){
        a(x/10000000);
        cout<<" kuti";
        x%=10000000;
    }
    if(x/100000!=0){
        a(x/100000);
        cout<<" lakh";
        x%=100000;
    }
    if(x/1000!=0){
        a(x/1000);
        cout<<" hajar";
        x%=1000;
    }
    if(x/100!=0){
        a(x/100);
        cout<<" shata";
        x%=100;
    }
    if(x!=0){
        cout<<" "<<x;
    }
}
int main(){
    long long  num;
    int count=1;
    while(cin>>num){
        cout<<setw(4)<<count<<".";
        count++;
        a(num);
        if(num==0){
		cout<<" 0";
        }
        cout<<endl;
    }
}
