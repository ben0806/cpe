#include <iostream>
#include <cctype>
using namespace std;
int main(){
    string s;
    while(getline(cin,s)){
        int sum=0;
        int max=1;
        int b;
        for(int i=0;i<s.length();i++){
            if(isdigit(s[i])){
                b=s[i]-'0';
            }
            else if(isupper(s[i])){
                b=s[i]-'A'+10;
            }
            else if(islower(s[i])){
                b=s[i]-'a'+36;
            }
            else{
                continue;
            }
            sum+=b;
            if(b>max){
                max=b;
            }
        }
        int i=max;
        for(i=max;i<62;i++){
            if(sum%i==0){
                cout<<i+1<<endl;
                break;
            }
        }
        if(i==62){
            cout<<"such number is impossible!"<<endl;
        }
    }
}