#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s,s1="101",s2="010";
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        size_t a=s.find(s1);
        size_t b=s.find(s2);
        if((a!=string::npos)||(b!=string::npos))cout<<"GOOD\n";
        else cout<<"BAD\n";
        s.clear();
    }
    
    return 0;
}