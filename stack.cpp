#include<bits/stdc++.h>
using namespace std;

int main(){
	long n;
	cin>>n;
	vector<long>arr(n);
	for(long i=0; i<n; i++)
	 cin>>arr[i];
	long long count =0 ;
	for(long i=0; i<n; i++){
		count += arr[i]/2;
		long d = arr[i]/2;
		arr[i] = arr[i]-(2*d);
		if(i<n-1 && arr[i]%2==1 && arr[i+1]%2==1){
			count++;
			arr[i+1]--;
		}
	}
	cout<<count<<"\n";
	return 0;
}
