#include <bits/stdc++.h>
using namespace std;
int t(int a){
    if(a>=10) return t(a/10)+a%10;
    return a;
}
int main(){
    string s;
    while(cin>>s){
        cout<<s;
        if(s=="0")break;
        int degree=0;
        int sum=0;
        for(int i=0;i<s.length();i++){
            sum+=int(s[i]-'0');
        }
        if(sum%9==0){
            degree++;
        }
        while(sum>10){
            sum=t(sum);
            degree++;
        }
        if(sum==9){
            cout<<" is a multiple of 9 and has 9-degree "<<degree++<<"."<<endl;
        }
        else{
            cout<<" is not a multiple of 9"<<endl;
        }
    }
}
