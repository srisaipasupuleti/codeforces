#include<iostream>
using namespace std;
int main(){
    int t,a,b,c;
    cin>>t;
    while(t!=0){
        cin>>a>>b>>c;
        if(a+b+c==180){
            cout<<"YES"<<"\n";
        }
        else 
        cout<<"NO"<<'\n';
        t--;
    }
    return 0;
}