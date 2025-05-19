#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int count=1;
    while(cin>>n){
        bool check[20002];
        int nums[101];
        int flag=1;
        for(int i=0;i<n;i++){
            cin>>nums[i];
            if(nums[i]<1)flag=0;
        }
        for(int i=0;i<=20001;i++){
            check[i]=false;
        }
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(check[nums[i]+nums[j]]||nums[j]<nums[i])
                    flag=false;
                else
                    check[nums[i]+nums[j]]=true;
            }
        }
        if(flag)cout<<"Case "<<"#"<<count++<<": It is a B2-Sequence."<<endl;
        else{
            cout<<"Case "<<"#"<<count++<<": It is not a B2-Sequence."<<endl;
        }
        cout<<endl;
    }
}
