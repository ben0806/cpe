#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int ans=0;
        int a;
        cin>>a;
        vector<int> ab(a);
        for(int i=0;i<a;i++){
            cin>>ab[i];
        }
        sort(ab.begin(),ab.end());
        for(int i=0;i<a;i++){
            ans+=abs(ab[i]-ab[a/2]);
        }
        cout<<ans<<endl;
    }
}