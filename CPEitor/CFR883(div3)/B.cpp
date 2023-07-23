#include <iostream>
using namespace std;
char map[5][5];
void solve(){
    for(int i=1;i<=3;++i){
        for(int j=1;j<=3;++j){
            cin>>map[i][j];
        }
    }
    for(int i=1;i<=3;++i){
        if(map[i][1]==map[i][2]&&map[i][2]==map[i][3]&&map[i][1]!='.'){
            cout<<map[i][1]<<"\n";
            return ;
        }
    }
    for(int i=1;i<=3;++i){
        if(map[1][i]!='.'&&map[1][i]==map[2][i]&&map[2][i]==map[3][i]){
            cout<<map[1][i]<<"\n";
            return ;
        }
    }
    if(map[1][1]!='.'&&map[1][1]==map[2][2]&&map[2][2]==map[3][3]){
        cout<<map[1][1]<<"\n";
        return ;
    }
    if(map[3][1]!='.'&&map[3][1]==map[2][2]&&map[2][2]==map[1][3]){
        cout<<map[3][1]<<"\n";
        return ;
    }
    cout<<"DRAW"<<"\n";
}
int main(){
    int n;
    cin>>n;
    while(n--){
        solve();
    }
}