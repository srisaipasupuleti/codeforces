//implemented using vectors
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i,k,uncle;
    cin>>t;
    while(t!=0){
        cin>>n;
        vector<int> play_list;
        i=0;
        int I;
        while(i<n)
        {
            i++;
            cin>>I;
            play_list.push_back(I);
        }
        cin>>k;
        uncle=play_list[k-1];
        sort(play_list.begin(),play_list.end());
        cout<<lower_bound(play_list.begin(),play_list.end(),uncle)-play_list.begin()+1<<"\n";
        t--;
    }
    return 0;
}