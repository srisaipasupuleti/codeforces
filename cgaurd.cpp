#include<iostream>
using namespace std;
int max(int a,int b){
    return a>b?a:b;
}
int main(){
    int t,a,b;
    cin>>t;
    while(t!=0){
        cin>>a>>b;
        cout<<max(a,b)<<" "<<a+b<<"\n";
        t--;
    }
    return 0;
}