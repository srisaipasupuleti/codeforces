#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    string m,w,temp;
    while(t--){
        cin>>m>>w;

        if(m.size()>w.size()){
            temp=m;
            m=w;
            w=temp;
        }
        int j=0,i=0;
        while((j<w.size())&&(i<m.size())){
        if(m[i]==w[j]){
               i++;j++;continue;
            }
            j++;
        }
        if(i>=m.size())cout<<"YES\n";
        else if(i<m.size())cout<<"NO\n";
    }
    return 0;
}