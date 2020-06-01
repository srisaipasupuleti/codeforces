#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,d;
    cin>>n>>d;
    int l[n],count=0;
    for(int i=0;i<n;i++){
        cin>>l[i];
    }
    sort(l,l+n);
    for(int i=0;i<n-1;i++){
        if((l[i+1]-l[i])<=d){
            count++;
            i++;
        }
    }
    cout<<count<<"\n";
    return 0;
}