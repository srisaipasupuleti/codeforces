#include<bits/stdc++.h>
using namespace std;
int main(){
    /*int n;cin>>n;
    vector<int>v;
    for(int i=7;i<=n+6;i++)v.push_back(i);
    cout<<"size:"<<v.size()<<"\n";
    for(auto x:v){
        cout<<x<<" ";
    }cout<<"\n";
    vector<int>::iterator it;
    int i;
    cin>>i;
    it=upper_bound(v.begin(),v.end(),i);
    cout<<*it<<"\n";
    cout<<*v.end();*/
    int t;
    cin>>t;
    vector<int>::iterator it;
    while(t--){
        int n;
        cin>>n;
        int temp;
        vector<int>v;
        while(n--){
            cin>>temp;
            int index=upper_bound(v.begin(),v.end(),temp)-v.begin();
            if(index<v.size()){
                //v.erase(it,it);
                //remove(v.begin(),v.end(),*it);
                v.erase(v.begin()+index);
                v.push_back(temp);
            }
            else{
                v.push_back(temp);
            }
            sort(v.begin(),v.end());
           // cout<<"v:"<<"\n";
            //for(auto x:v)cout<<x<<" ";cout<<"\n";
        }
        cout<<v.size()<<" ";
       for(auto x:v)cout<<x<<" ";
       cout<<"\n";
       v.clear();
    }
    return 0;
}