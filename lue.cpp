#include<iostream>
using namespace std;
int main(){
int i;
int flag=1;
while(flag==1)
{
	cin>>i;
	if(i!=42){
		cout<<i<<"n";
	}
	else
    {
		flag=0;
	}
}

return 0;
}