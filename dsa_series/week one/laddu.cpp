#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string origin,activity;
    int activities,rank,sev;
    while(t--){
        int laddus=0;
        cin>>activities;
        cin>>origin;
        while(activities--){
            cin>>activity;
            if(activity=="CONTEST_WON"){
                cin>>rank;
                laddus+=300;
                if(rank<20){
                    laddus+=(20-rank);
                }
            }
            if(activity=="TOP_CONTRIBUTOR"){
                laddus+=300;
            }
            if(activity=="BUG_FOUND"){
                cin>>sev;
                laddus+=sev;
            }
            if(activity=="CONTEST_HOSTED"){
                laddus+=50;
            }
        }
        if(origin=="INDIAN"){
            cout<<laddus/200<<"\n";
        }
        else{
            cout<<laddus/400<<"\n";
        }
    }
    return 0;
}