#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int x;
    int count=1;
    cin>>x;
    while(x--){
        string a,b;
        cin>>a>>b;
        if(a.size()==1||b.size()==1){
            cout<<"Pair #"<<count++<<": All you need is love!"<<endl;
            continue;
        }
        int aa=0,bb=0;
        for(int i=0;i<a.length();i++){
            if(a[i]=='1'){
                aa+=pow(2,a.size()-1-i);
            }
        }
        for(int i=b.size()-1;i<b.length();i++){
            if(b[i]=='1'){
                bb+=pow(2,b.size()-1-i);
            }
        }
        int les=0;
        while(bb!=0){
            les=aa%bb;
            aa=bb;
            bb=les;
        }
        if(aa==1){
            cout<<"Pair #"<<count++<<": Love is not all you need!"<<endl;
        }
        else{
            cout<<"Pair #"<<count++<<": All you need is love!"<<endl;
        }

    }
}