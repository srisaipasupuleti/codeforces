    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int t,n,m;
        cin>>t;
        while(t--){
            cin>>n>>m;
            vector<int> jobs;
            for(int i=0;i<n;i++){
                jobs.push_back(i+1);
            }
            int c;
            for(int i=0;i<m;i++){
                cin>>c;
                jobs.erase(remove(jobs.begin(),jobs.end(),c));
            }        
            for(int i=0;i<jobs.size();i+=2){
                cout<<jobs[i]<<" ";
            }
            cout<<endl;
            for(int i=1;i<jobs.size();i+=2){
                cout<<jobs[i]<<" ";
            }
            cout<<endl;
        }
    return 0;
    }
