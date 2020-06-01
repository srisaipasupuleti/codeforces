    #include<bits/stdc++.h>
    using namespace std;
    typedef unsigned long long ull;
    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int t,n,k;
        vector<int>a;
        cin>>t;
        while(t--){
            cin>>n>>k;
            a.resize(n);
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            int inversions=n*(n-1)/2;
            if(inversions&1){
                cout<<-1<<"\n";
            }
            else if(k<n/2)cout<<-1<<"\n";
            else{
                int i=0,j=n-1,k=j-1,flag=1;
                int l=n/2;
                cout<<l<<"\n";
                while(l--){
                    cout<<i+1<<" "<<k+1<<" "<<j+1<<"\n";
                    flag=!flag;
                    i++;
                    if(flag==1){
                        j-=2;
                        k=j-1;
                    }
                }
                a.clear();
            }
        }
        return 0;
    }