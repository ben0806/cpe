#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        vector <int> a(n);
        for(int i=0;i<a.size();i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int max=0,min=0;
        if(n%2==0){
            min=a[n/2-1];
            max=a[n/2];
        }
        else{
            min=max=a[n/2];
        }
        int count=0;
        for(int i=0;i<a.size();i++){
            if(a[i]>=min&&a[i]<=max){
                count++;
            }
        }
        int po=max-min+1;
        cout<<min<<" "<<count<<" "<<po<<endl;
    }
}