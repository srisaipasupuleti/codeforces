#include<bits/stdc++.h>
using namespace std;
/*
void printmap(map<int,int> m){
    map<int,int >::iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<": "<<it->second<<"\n";
    }
}
*/

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        int temp;
        int flag=1;
        map<int,int> m;
        while(n--){
            cin>>temp;
            m[temp]++;
            if(temp==10){
                if(m[5]!=0){
                    m[5]--;
                    continue;
                }
                else{
                    flag=0;
                    break;
                }
            }
            else if(temp==15){
                if(m[10]!=0){
                    m[10]--;
                    continue;
                }
                else if(m[5]>1){
                    m[5]=-2;
                    continue;
                }
                else{
                    flag=0;
                    break;
                }
            }
            //printmap(m);
        }
        if(flag==1)cout<<"YES\n";
        else cout<<"NO\n"; 
    }
    return 0;
}