#include <iostream>
#include <vector>
using namespace std;
int fib[40]={0,1};
void fb(){
    for(int i=2;i<40;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
}
int main(){
    fb();
    int x;
    cin>>x;
    while(x--){
        int flag=0;
        int n;
        cin>>n;
        cout<<n<<" = ";
        for(int i=39;i>=2;i--){
            if(n>fib[i]){
                flag=1;
                n-=fib[i];
                cout<<"1";
                
            }
            else if(flag){
                cout<<"0";
            }
        }
        cout<<" (fib)"<<endl;
    }
}