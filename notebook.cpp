#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pairs;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long t,x,y,k,n,reqpages;
    cin>>t;
    while(t--){
        cin>>x>>y>>k>>n;
        reqpages=x-y;
        vector<pairs> book;
        int t1,t2;
        for(long i=0;i<n;i++){
            cin>>t1>>t2;
            book.push_back(make_pair(t1,t2));
        }
        int flag=0;
        for(long i=0;i<n;i++){
            if((book[i].first>=reqpages)&&(book[i].second<=k)){
                flag=1;
                break;
            }
        }
        if(flag==1)cout<<"LuckyChef"<<"\n";
        else cout<<"UnluckyChef"<<"\n";
        book.clear();
    }
    return 0;
}