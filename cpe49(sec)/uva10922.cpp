#include <iostream>
using namespace std;
int a(int num){
    if(num<10) return num;
    return a(num/10)+num%10;
}
int main(){
    string s;
    while(cin>>s){
        cout<<s;
        if(s=="0")break;
        int num=0;
        int degree=0;
        for(int i=0;s.length();i++){
            num+=s[i];
        }
        if(num%9==0){
            degree++;
        }
        else{
            cout<<"is not a multiple of 9.";
            break;
        }
        while(num>10){
            num+=a(num);
            degree++;
        }
        if(num==9){
            cout<<" is a multiple of 9 and has 9-degree "<<degree++<<"."<<endl;
        }
        else{
            cout<<" is not a multiple of 9.";
        }
    }
}
