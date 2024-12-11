#include <iostream>
#include<cstring>
using namespace std;
int main(){
    char dir[4]={'N','E','S','W'};
    int dir_move[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
    int n,m;
    cin>>n>>m;
    int x,y;
    int fall[51][51];
    memset(fall,0,sizeof(fall));
    while(cin>>x>>y){
        int lost=0;
        char face;
        cin>>face;
        int facedir;
        for(int i=0;i<4;i++){
            if(dir[i]==face){
                facedir=i;
            }
        }
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='R'){
                facedir=(facedir+1)%4;
            }
            else if(s[i]=='L'){
                facedir=(facedir+3)%4;
            }
            else{
                x=x+dir_move[facedir][0];
                y=y+dir_move[facedir][1];
                if(x>n || y>m ||x<0 || y<0){
                    x=x-dir_move[facedir][0];
                    y=y-dir_move[facedir][1];
                    lost=1;
                    break;
                }
            }
        }
        cout<<x<<" "<<y<<" "<<dir[facedir];
        if(lost)cout<<" "<<"LOST";
        cout<<endl;
    }
}