#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b;
        double p;
        cin>>a>>p>>b;
        double q=1-p;
        double ans=p*(pow(q,b-1))/(1-pow(q,a));
        if(p==0) cout<<"0.0000"<<endl;
        else{
            cout<<fixed<<setprecision(4)<<ans<<endl;
        }
    }
}