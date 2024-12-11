#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <string> day={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    vector <int>a={31,28,31,30,31,30,31,31,30,31,30,31};
    int n;
    cin>>n;
    while(n--){
        int month,date;
        int totalday=0;
        cin>>month>>date;
        int base=3;
        for(int i=0;i<month-1;i++){
            totalday+=a[i];
        }
        totalday+=date;
        totalday+=3;
        int week=totalday%7;
        cout<<day[week];
    }
}