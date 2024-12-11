#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
    int x;
    cin>>x;
    while(x--){
        int count=0;
        int days;
        cin>>days;
        int numbers;
        cin>>numbers;
        vector<int> b(numbers);
        for(int i=0;i<numbers;i++){
            cin>>b[i];
        }
        for(int i=1;i<=days;i++){
            if(i%7==6||i%7==0){
                continue;
            }
            for(int p=0;p<b.size();p++){
                if(i%b[i]==0){
                    count++;
                    break;
                }
            }
            
        }
        cout<<count<<endl;
        
    }
}