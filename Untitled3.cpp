#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
		while(t--){
			int n,p;
			cin>>n;
			long long a,b,c=1,d,e,s=5;
			cin>>a;
			for(int i=0;i<n; i++){
				s = s*10;
			}
			for(int i=0; i<n; i++){
				c =c*10;
			}
			cout<<s<<"\n";
			cin>>b;
			cout<<c<<"\n";
			cin>>d;
			e = s-(a+b+c+d);
			cout<<e<<"\n";
			cin>>p;
			if(p==-1){
				return 0;	
			}
   }
   return 0;
}
