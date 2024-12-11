#include <iostream>
using namespace std;
int main(){
    string s;
    while(cin>>s){
        if(s=="0")break;
        int even=0;
        int odd=0;
        for(int i=s.length()-1;i>=0;i--){
            if(i%2==0){
                odd+=s[i]-'0';
            }
            else{
                even+=s[i]-'0';
            }
        }
        if(abs(odd-even)%11==0){
            cout<<s<<" "<<"is a multiple of 11."<<endl;
        }
        else{
            cout<<s<<" "<<"is not a multiple of 11."<<endl;
        }
    }
}