    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int t,n,s,v,p;
        long max,cur;
        cin>>t;
        while(t--){
            cin>>n;
            max=0;
            while(n--){
                cin>>s>>p>>v;
                cur=floor(p/(s+1))*v;
                if(cur>max){
                    max=cur;
                }
            }
            cout<<max<<"\n";
        }
        return 0;
    }