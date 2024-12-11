#include <iostream>
#include <cctype>
using namespace std;
int main(){
    string key="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string s;
    while(getline(cin,s)){
        for(int i=0;i<s.length();i++){
            for(int p=0;p<key.length();p++){
                if(isspace(s[i])){
                    cout<<" ";
                    break;
                }
                else if(tolower(s[i])==key[p]){
                    cout<<key[p-2];
                    break;
                }
            }
        }
        cout<<endl;
    }
}