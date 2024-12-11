#include <iostream>
#include <vector>
using namespace std;
int main(){
    int x;
    cin>>x;
    int count=1;
    while(x--){
        if(count!=1)cout<<endl;
        cout<<"Case "<<count++<<":"<<endl;
        vector <int>a(36);
        for(int i=0;i<36;i++){
            cin>>a[i];
        }
        int numsc;
        cin>>numsc;
        while(numsc--){
            vector <int> ans(37,0);
            int nums;
            cin>>nums;
            cout<<"Cheapest base(s) for number "<<nums<<":";
            int min=214700000;
            for(int base=2;base<=36;base++){
                int temp=nums;
                while(temp>0){
                    ans[base]+=a[temp % base];
                    temp/=base;
                }
            }
            for(int i=2;i<=36;i++){
                if(ans[i]<min){
                    min=ans[i];
                }
            }
            for(int i=2;i<=36;i++){
                if(min==ans[i]){
                    cout<<" "<<i;
                }
            }
            cout<<endl;
        }
    }
}