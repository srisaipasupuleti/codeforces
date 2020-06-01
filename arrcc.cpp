#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int min=INT_MAX,diff=0;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                diff=((n/i)-i);
                if(min>diff)min=diff;
            }
        }
        cout<<min<<"\n";
    }
    return 0;
}