#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    map<string,string> clist;
    map<string,int> name;
    map<string,int> country;
    int n,m;
    cin>>n>>m;
    string temp1,temp2;
    for(int i=0;i<n;i++){
        cin>>temp1>>temp2;
        clist[temp1]=temp2;
    }
    for(int i=0;i<m;i++){
        cin>>temp1;
        name[temp1]++;
        country[clist[temp1]]++;
    }
    string chefwon,conwon;
    int cmax=INT_MIN;
    for(auto it=name.begin();it!=name.end();it++){
        if(it->second >cmax){
            chefwon=it->first;
            cmax=it->second;
        }
        else if(it->second==cmax){
            if(it->first < chefwon)chefwon=it->first;
        }
    }
    cmax=INT_MIN;
    for(auto it=country.begin();it!=country.end();it++){
        if(it->second >cmax){
            conwon=it->first;
            cmax=it->second;
        }
        else if(it->second==cmax){
            if(it->first < conwon)conwon=it->first;
        }
    }
    cout<<conwon<<"\n";
    cout<<chefwon<<"\n";
    return 0;
}