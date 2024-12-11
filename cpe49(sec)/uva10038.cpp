#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        bool check=true;
        vector <int>a(n);
        vector<int> count(n,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
         if(n==1){
            cout<<"Jolly"<<endl;
            continue;
        }
         for(int i=0;i<n;i++){
            if(i!=0){
                if(abs(a[i]-a[i-1])<n){
                    count[abs(a[i]-a[i-1])]++;
                }
            }
        }
        for(int i=1;i<n;i++){
            if(count[i]==0){
                check=false;
                break;
            }
        }
        if(check) cout<<"Jolly"<<endl;
        else cout<<"Not jolly"<<endl;
    }
}