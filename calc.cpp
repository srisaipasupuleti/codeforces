#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"e value:"<<"\n";
    double e,d;
    cin>>e;
    cout<<"d value:"<<"\n";
    cin>>d;
    double n=(1/e)*(1-((1-e)/d));
    cout<<abs(n)<<"\n";
}