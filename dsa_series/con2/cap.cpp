#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string exp;
        int l=0,c=0;
        cin>>exp;
        stack<char> s;
        s.push('$');
        for(int i=0;i<exp.length();i++){
            if(exp[i]=='<'){
                s.push(exp[i]);
            }
            else{
                if(s.top()=='<'){
                    s.pop();
                    c+=2;
                    if(s.top()=='$'){
                        l+=c;
                        c=0;
                    }
                }
                else{
                    break;
                }
            }
        }
        cout<<l<<"\n";
    }
    return 0; 
}