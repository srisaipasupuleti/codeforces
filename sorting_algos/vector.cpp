#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> example;
    example.push_back(2);
    example.push_back(3);
    example.push_back(5);
    example.push_back(7);
    for(auto it=example.begin();it!=example.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    example.erase(remove(example.begin(),example.end(),5));
    for(int i=0;i<example.size();i++){
        cout<<example[i]<<" ";
    }
    cout<<endl;
    return 0;
}