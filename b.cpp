#include<bits/stdc++.h>
using namespace std;

int main(){
	long n;
	cin>>n;
	vector<int>arr(n);
	for(long i=0; i<n; i++){
		cin>>arr[i];
	}
	sort(arr.begin(),arr.end());
	long x=0,y=0,i=0,j=arr.size()-1;
	while(i<j){
		x = x+arr[j--];
		y = y+arr[i++];
	}
	if(arr.size()%2!=0){
		x = x+arr[j];
	}
	cout<<x*x + y*y<<"\n";
	return 0;
}
