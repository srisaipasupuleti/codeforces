#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    char m[256]={0};
    string s;
    cin>>t;
    cin>>s;
    int j=0;
    for (char i='a';i<='z';i++){
        m[s[j]]=i;
        j++;
    }
    string c;
    while(t--){
        cin>>c;
        for(int i=0;i<c.size();i++){
            if((c[i]>=97)&&(c[i]<=122)){
                cout<<m[(int)c[i]];
            }
            else if((c[i]>=65)&&(c[i]<=90)){
                cout<<m[(int)c[i]];
            }
            else if(c[i]=='_')cout<<" ";
            else cout<<c[i];
        }
        cout<<'\n';
        c.clear();
    }
    return 0;
}