#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    set<int >s ;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    for(auto i=s.begin();i!=s.end();i++){
        cout<<*i<<"\n";
    }

    return 0;
}