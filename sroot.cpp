#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t!=0){
        cin>>n;
        cout<<(int)sqrt(n)<<"\n";
        t--;
    }
    return 0;
}