#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        int min=s[0];
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]<=min){
            count++;
            min=s[i];
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}