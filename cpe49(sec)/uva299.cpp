#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int count=0;
        int p;
        cin>>p;
        vector <int> a(p);
        for(int i=0;i<p;i++){
            cin>>a[i];
        }
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a.size()-i-1;j++){
                if(a[j]>a[j+1]){
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    count++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;
    }
}