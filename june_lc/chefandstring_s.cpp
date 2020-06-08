#include<bits/stdc++.h>
using namespace std;  
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int i=0,pairs=0;
        while(i<s.size()){
            if(s[i]=='x'){
                if(s[i+1]=='y'){
                    pairs++;
                    i+=2;
                }
                else i++;
            }
            else if(s[i]=='y'){
                if(s[i+1]=='x'){
                    pairs++;
                    i+=2;
                }
                else i++;
            }
        }
        cout<<pairs<<"\n";
    }
    return 0;
}