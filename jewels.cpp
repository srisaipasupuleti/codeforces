#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    int c[256]={0};
    string j,s;
    while(T--){
        cin>>j;
        cin>>s;
        int count=0;
        for(int i=0;i<j.size();i++){
            if(c[j[i]]==0)c[j[i]]=1;
        }
        for(int i=0;i<s.size();i++){
            if(c[s[i]]==1)count++;
        }
        cout<<count<<"\n";
        memset(c,0,sizeof(c));
    }
    
    return 0;
}