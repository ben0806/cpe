#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>
using namespace std;
int main(){
    int x;
    while(cin>>x){
        cin.ignore();
        vector <long long> a;
        string s;
        getline(cin,s);
        stringstream ss(s);
        long long b;
        while(ss>>b){
            a.push_back(b);
        }
        a.pop_back();
        int q=a.size();
        long long ans=0;
        for(int i=0;i<a.size();i++){
            ans+=(a[i]*q)*pow(x,q-1);
            q--;
        }
        cout<<ans<<endl;
    }
}