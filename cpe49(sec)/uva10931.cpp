#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        if(n==0)break;
        int count=0;
        string s;
        while(n>0){
            if(n%2==1){
                s=s+'1';
                count++;
            }
            else{
                s=s+'0';
            }
            n/=2;
        }
        reverse(s.begin(),s.end());
        cout<<"The parity of "<<s<<" is "<<count<<" (mod 2)."<<endl;
    }
}