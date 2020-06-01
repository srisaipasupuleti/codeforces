#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,n,k;
    cin>>a>>n>>k;
    n++;
    for(int i=0;i<k;i++){
        cout<<a%n<<" ";
        a=a/n;
    }
    cout<<'\n';
    return 0;
}