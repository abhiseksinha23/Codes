#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		string s;
		cin>>s;
		long time=0;
		while(1){
			bool isdone =true;
			for(int i=0; i<n-1; i++){
				if(s[i]=='A' && s[i+1]=='P'){
					isdone = false;
					s[i+1] ='A';
					i++;
				}
			}
			if(isdone){
				break;
			}
			time++;
		}
		cout<<time<<"\n";
	}
	return 0;
}
