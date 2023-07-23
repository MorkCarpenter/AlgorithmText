#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n <= 4){
            cout<<"Bob"<<"\n";
        }else if(n>=5){
            cout<<"Alice"<<"\n";
        }
    }
    return 0;
}