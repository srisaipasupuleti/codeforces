#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t!=0){
        cin>>n;
        string str=to_string(n);
        reverse(str.begin(),str.end());
        stringstream s(str);
        int x;
        s>>x;
        cout<<x<<"\n";
        t--;
    }
    return 0;

}