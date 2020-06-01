#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    unsigned long long a;
    cin>>a;
    if(a%6==0||a%6==1||a%6==3)
    cout<<"yes\n";
    else 
    cout<<"no\n";
    return 0;
}