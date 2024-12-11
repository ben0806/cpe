#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    while(n--){
        int ax,ay,bx,by;
        cin>>ax>>ay>>bx>>by;
        int positiona=0;
        int positionb=0;
        int totala=ax+ay;
        int totalb=bx+by;
        for(int i=1;i<=totala;i++){
            positiona+=i;
        }
        positiona+=ax;
        for(int i=1;i<=totalb;i++){
            positionb+=i;
        }
        positionb+=bx;
        int ans=abs(positiona-positionb);
        cout<<"Case "<<count++<<": "<<ans<<endl;
    }
}