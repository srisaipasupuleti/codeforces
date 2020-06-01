#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,f,s,next,sum;
    long long int k;
    cin>>t;
    while(t--){
        cin>>k>>f>>s;
        sum=f+s;
        int i=k-2;
        while(i--){
            next=sum%10;
            sum+=next;
        }
        if(sum%3==0){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}