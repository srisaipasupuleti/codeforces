#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t!=0){
        cin>>n;
        int first=n%10;
        while(n/10!=0){
            n=n/10;
        }
        int last=n;
        cout<<last+first<<"\n";
        t--;
    }
    return 0;
}