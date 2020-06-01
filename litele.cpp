#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,l,c,temp,prev;
    cin>>t;
    vector<int>a;
    while(t--){
        cin>>n;
        a.resize(n);
        prev=-1;
        l=0;c=0;
        for(int i=0;i<n;i++){
            cin>>temp;
            if(temp<prev)l++;
            prev=temp;
            a.push_back(temp);
        }
        for(int i=0;i<a.size()-1;i++){
            for(int j=i+1;j<a.size();j++){
                if(a[i]>a[j])c++;
            }
        }
        //cout<<"l:"<<l;
        //cout<<"c:"<<c;

        if(c==l)cout<<"YES\n";
        else cout<<"NO\n";
        a.clear();
    }
    return 0;
}