#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n;
    vector<int> a;
    cin>>t;
    while(t--){
        cin>>n;
        a.resize(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        sort(a.begin(),a.end());
        if(a[0]==a[n-1]){
            cout<<a[0];
        }
        else{
            int maindex=n-1,mindex=0;
            while(a[mindex]!=a[maindex]){
                a[maindex]-=a[mindex];
                if(a[mindex]>a[maindex]){
                    mindex=maindex;
                    maindex--;
                }
                else if(a[maindex]<a[maindex-1])
                maindex--; 
            }
        }
        cout<<a[0]<<"\n";
        a.clear();
    }
    return 0;
}