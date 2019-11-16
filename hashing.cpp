#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n;
	int a[n];
	int hash[201] = {0};
	for(int i=0;i<n; i++){
	 cin>>a[i];	
	 hash[a[i]]++;	
	}

	cin>>m;
	int b[m];
	for(int i=0;i<m; i++){
		 cin>>b[i];
	 	hash[b[i]]++;	
	}
	for(int i=0;i<n; i++){
		int f=0;
		for(int j=0; j<m; j++){
			int x = a[i]+b[j];
			if(x>200 || hash[x]==0){
				cout<<a[i]<<" "<<b[j]<<"\n";
				f = 1; 
				break;
			}
		}
		if(f==1)
		 break;
	}
	return 0;
}
