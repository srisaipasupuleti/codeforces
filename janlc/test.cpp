#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string skip;
    getline(cin,skip);
    while(t--){
        string s;
        getline(cin,s);
        stringstream wss(s);
        string word;
        int flag=0;
        while(wss>>word){
            if(word=="not"){
                flag=1;
                break;
            }
        }
        if(flag==1)cout<<"Real Fancy\n";
        else cout<<"regularly fancy\n"; 
        s.clear();       
    }
    return 0;
}