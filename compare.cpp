#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	long ma;
	cin>>n>>ma;
	vector<long>a(n);
	vector<long>b(n);
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<n; i++){
		cin>>b[i];
	}
	long d,f=0,ans = INT_MAX;
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	for(int i=0; i<n; i++){
		if(a[i]!=b[i]){
			f =1;
			d = b[i]-a[i];
			if((a[i]+d)%ma==b[i]){
//				ans = d;
				if(d<ans)ans= d;
			}else{
				long x=1;
				while((a[i]+x)%ma!=b[i] && x<ans){
					x++;
				}
				if(x<ans)
				ans = x;
			}
			//break;	
		}
	}
	if(f==0){
		cout<<"0\n";
		return 0;
	}else{
		cout<<ans<<"\n";
	}
//	long d1=0,d2=0;
//	for(long i=0; i<n; i++){
//		if(m[a[i]]>0) {
//			d1 = a[i];
//			break;
//		}
//	}
//	for(long i=0; i<n; i++){
//		if(mb[b[i]]>0) {
//			d2 = b[i];
//			break;
//		}
//	}
//	 long ans = d2-d1;
//	cout<<ans<<"\n";
	return 0;
}
