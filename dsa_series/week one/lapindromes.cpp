#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,l;
    cin>>t;
    while(t--){
        char str[1000];
        cin>>str; 
        l=strlen(str);
        char a[256]={0};
        int flag=0;
        for(int i=0;i<l/2;i++){
            a[str[i]]++;
        }
        if(l&1){
            for(int i=l/2+1;i<l;i++){
                a[str[i]]--;
            }
        }
        else{
            for(int i=l/2;i<l;i++){
                a[str[i]]--;
            }
        }
        for(int i=0;i<256;i++){
            if(a[i]!=0){
                flag=1;
                break;
            }
        }   
        if(flag!=0){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
        }
        str[0]=0;
    }
    return 0; 
}