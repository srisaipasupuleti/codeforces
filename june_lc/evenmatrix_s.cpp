#include<bits/stdc++.h>
using namespace std;
void printnodd(int n){
    int e=1;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<e<<" ";e++;
                }
                cout<<"\n";
            }
}

void printneven(int n){
    int e;
            for(int i=0;i<n;i++){
                    if(i%2==0){
                        e=(n*i)+1;
                        for(int j=0;j<n;j++){
                            cout<<e<<" ";
                            e++;
                        }
                    }
                    else{
                        e=(i+1)*n;
                        for(int j=0;j<n;j++){
                            cout<<e<<" ";e--;
                        }
                    }
                
                cout<<"\n";
            }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n&1) printnodd(n);
        else printneven(n);
    }
    return 0;
}