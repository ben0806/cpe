#include <iostream>
using namespace std;
int main(){
    int n;
    int count=1;
    cin>>n;
    while(n--){
        int a,b;
        int sum=0;
        cin>>a>>b;
        while(a<=b){
            if(a%2==1){
                sum+=a;
            }
            a++;
        }
        cout<<"Case "<<count<<": "<<sum<<endl;
        count++;
    }
}