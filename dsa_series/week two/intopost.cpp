#include<bits/stdc++.h>
using namespace std;
int p(char a){
    if(a=='^'){
        return 3;
    }
    else if(a=='*'||a=='/')
    {
        return 2;
    }
    else if(a=='+'||a=='-'){
        return 1;
    }
    else {
        return -1;
    }
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    char top;
    cin>>t;
    while(t--){
        cin>>n;
        char str;
        stack<char> s;
        s.push('$');
        //cout<<"cp1:\n";
        for(int i=0;i<n;i++){
            cin>>str;
            //cout<<"es: "<<str<<" ";
            if(str>=65&&str<=90){
                cout<<str;
            }
            else if(str=='('){
                s.push(str);
            }
            else if(str==')'){
                top=s.top();
                while(top!='('){
                    cout<<top;
                    s.pop();
                    top=s.top();
                }
                s.pop();
            }
            else{
                if(p(str)<p(s.top())){
                    while(p(str)<p(s.top())){
                    top=s.top();
                    cout<<top;
                    s.pop();
                    }
                }
                s.push(str);
            }
        }
        top=s.top();
        while(top!='$'){
            cout<<top;
            s.pop();
            top=s.top();
        }
        cout<<"\n";      
    }
return 0;
}
