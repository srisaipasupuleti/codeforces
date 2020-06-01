#include<iostream>
#include<iterator>
#include<map>
using namespace std;
int main(){
    map<int,int> mp;
    mp[0]=4;
    mp[1]=3;
    mp[2]=2;
    mp[3]=1;
    mp[4]=0;
    cout<<mp.size()<<"\n";
    cout<<mp[3]<<"\n";
    return 0;
}
