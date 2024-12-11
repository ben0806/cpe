#include <iostream>
#include <iomanip>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    while(n--){
        string trash;
        getline(cin,trash);
        map <string,int> ans;
        int total=0;
        string s;
        while(getline(cin,s)&&!s.empty()){
            ans[s]++;
            total++;
        }
        for(auto i:ans){
            cout<<i.first<<" "<<fixed<<setprecision(4)<<(double)i.second*100/total<<endl;
        }
        if(n!=1)cout<<endl;
    }
}