#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
		while(t--){
			int n;
			cin>>n;
			vector<int>arr(3);
			int total= 0;
			for(int i=0; i<3; i++){
				cin>>arr[i];
				total+=arr[i];
			}
			if(n==2){	
				if(arr[0]==1 && arr[1]==2 && arr[2]==1){
					cout<<"3"<<"\n";
				}else{
				
				int r =total%n;
				int ans = total/n;
				if(r>0)ans++;
				cout<<ans<<"\n";		
				}
				continue;
			}
			if(n==3){
				if(arr[0]==2 && arr[1]==2 && arr[2]==2){
					cout<<"3"<<"\n";
				}else{
					int r =total%n;
				int ans = total/n;
				if(r>0)ans++;
				cout<<ans<<"\n";		
				}
				continue;
			}
			if(total<=n){
				cout<<"1\n";
				continue;
			}
				int r =total%n;
				int ans = total/n;
				if(r>0)ans++;
				cout<<ans<<"\n";		
		}
}
