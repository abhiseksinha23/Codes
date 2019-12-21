#include<bits/stdc++.h>
using namespace std;
bool iscomposite(long n) 
{ 
    if (n <= 1)  return false; 
    if (n <= 3)  return false; 
   
    if (n%2 == 0 || n%3 == 0) return true; 
   
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return true; 
   
    return false; 
} 
bool isprime(long n){
	for(long i=2; i<=n/2; i++){
		if(n%i==0)return false;
	}
	return true;
}
int main(){
	long n;
	cin>>n;
	long com = 4;
	while(1){
		if(iscomposite(n+com)){
			break;
		}
		com++;
		while(isprime(com)){
			com++;
		}
	}
	cout<<n+com<<" "<<com<<"\n";
	return 0;
}
