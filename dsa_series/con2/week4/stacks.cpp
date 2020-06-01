#include<bits/stdc++.h>
using namespace std;
int main(){
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
                v.erase(v.begin()+index);
                v.push_back(temp);
            }
            else{
                v.push_back(temp);
            }
            sort(v.begin(),v.end());
            cout<<"v:"<<" ";
            for(auto x:v)cout<<x<<" ";
        }
        cout<<v.size()<<" ";
       for(auto x:v)cout<<x<<" ";
       v.clear();
    }
    return 0;
}