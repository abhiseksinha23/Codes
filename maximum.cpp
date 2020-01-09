#include<bits/stdc++.h>
using namespace std;

int main(){
	long n;
	cin>>n;
	vector<int>arr(n);
	for(long i=0; i<n; i++)
	 cin>>arr[i];
	
	long i=0,max=0;
	while(i<n){
		long two=0,one=0,c=0,si=-1;
		bool ischanged = false;
		if(arr[i]==1){
			one++;
			long j;
			for(j=i+1; j<n; j++){
				if(arr[j-1]!=arr[j]){
					//si =j;
					c++;
					if(c>1)break;
					else si =j;
				//	ischanged = true;
//				}else{
//					break;
				}
				if(arr[j]==1){
					one++;
				}else{
					two++;
				}
				
			}
//			if(si==-1){
//				i = j;
//			}else
//			i = si;
			long x = min(one,two);
			if(x>max)max = x;
		}else{
			long j;
			two++;
			for( j=i+1; j<n; j++){
				if(arr[j-1]!=arr[j] && !ischanged){
					c++;
					if(c>1)break;
					else si = j;
//					si =j;
//					ischanged = true;
//				}else{
//					break;
				}
				if(arr[j]==2){
					two++;
				}else{
					one++;
				}
			}
//			if(si==-1){
//				i = j;
//			}else
//			i = si;
			long x = min(one,two);
			if(x>max)max = x;
		}
		if(si!=-1)
		i = si;
		else
//		i = n;
        i++;
	}
	cout<<max*2<<"\n";
	return 0;
}
