#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    string s,trash;
    map<string,int> a;
    cin>>n;
    while(n--){
        cin>>s;
        a[s]++;
        getline(cin,trash);
    }
    for(auto i:a){
        cout<<i.first<<" "<<i.second<<endl;
    }
}