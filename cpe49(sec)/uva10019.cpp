#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    while(x--){
        int n;
        cin>>n;
        int dec=n;
        int hex=n;
        int count1=0;
        int count2=0;
        while(dec>0){
            if(dec%2==1){
                count1++;
            }
            dec/=2;
        }
        while(hex>0){
            int temp=hex%10;
            while(temp>0){
                if(temp%2==1){
                    count2++;
                }
                temp/=2;
            }
            hex/=10;
        }
        cout<<count1<<" "<<count2<<endl;
    }
}