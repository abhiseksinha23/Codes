#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int t = 240-k;
	int lt=5;
	int s=0;
	int p=2;
	while(lt<t && s<n){
		s++;
		lt += 5*p;
		p++; 
	}
	cout<<s<<"\n";
	return 0;
}
