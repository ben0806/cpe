#include <iostream>
#include <vector>
using namespace std;
int main(){
    string s;
    int flag=0;
    while(getline(cin,s)){
        if(flag==1){
            cout<<endl;
        }
        int max=0;
        vector<int> a(128,0);
        for(int i=0;i<s.length();i++){
            a[(int)s[i]]++;
        }
        for(int i=0;i<127;i++){
            if(a[i]>max) max=a[i];
        }
        for(int i=1;i<=max;i++){
            for(int p=126;p>=0;p--){
                if(a[p]==i){
                    cout<<p<<" "<<i<<endl;
                }
            }
        }
        flag=1;
    }
}