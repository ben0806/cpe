#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <string> ss(101);
    int count=0;
    int longth=0;
    while(getline(cin,ss[count])){
        if(ss[count].length()>longth){
            longth=ss[count].length();
        }
        count++;
    }
    for(int i=0;i<longth;i++){
        for(int j=count-1;j>=0;j--){
            if(i<ss[j].length()){
                cout<<ss[j][i];
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
}