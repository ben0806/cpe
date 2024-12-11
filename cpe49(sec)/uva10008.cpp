#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>count(26,0);
    vector<char>abc(26);
    int max=0;
    int n;
    for(int i=0;i<26;i++){
        abc[i]=i+'A';
    }
    string s;
    cin>>n;
    cin.ignore();
    while(n--){
        getline(cin,s);
        for(int i=0;i<s.length();i++){
            if(islower(s[i])||isupper(s[i])){
                count[toupper(s[i])-'A']++;
            }
        }
    }
    for(int i=0;i<26;i++){
        if(count[i]>max){
            max=count[i];
        }
    }
    for(int i=max;i>0;i--){
        for(int j=0;j<26;j++){
            if(count[j]==i){
                cout<<abc[j]<<" "<<count[j]<<endl;
            }
        }
    }
}