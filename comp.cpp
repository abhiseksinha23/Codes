D. Binary String Minimizing
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given a binary string of length n (i.?e. a string consisting of n characters '0' and '1').

In one move you can swap two adjacent characters of the string. What is the lexicographically minimum possible string you can obtain from the given one if you can perform no more than k moves? It is possible that you do not perform any moves at all.

Note that you can swap the same pair of adjacent characters with indices i and i+1 arbitrary (possibly, zero) number of times. Each such swap is considered a separate move.

You have to answer q independent test cases.

Input
The first line of the input contains one integer q (1=q=104) — the number of test cases.

The first line of the test case contains two integers n and k (1=n=106,1=k=n2) — the length of the string and the number of moves you can perform.

The second line of the test case contains one string consisting of n characters '0' and '1'.

It is guaranteed that the sum of n over all test cases does not exceed 106 (?n=106).

Output
For each test case, print the answer on it: the lexicographically minimum possible string of length n you can obtain from the given one if you can perform no more than k moves.

Example
inputCopy
3
8 5
11011010
7 9
1111100
7 11
1111100
outputCopy
01011110
0101111
0011111
Note
In the first example, you can change the string as follows: 110–––11010?10–––111010?011110–––10?01110–––110?0110–––1110?01011110.

In the third example, there are enough operations to make the string sorted.



#include<bits/stdc++.h>
using namespace std;
string a;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		cin>>a;
		int i=0,now=0;
		while(1){
			if(k==0)break;
			int pos=-1;
			for(int j=i;j<n;j++){
				if(a[j]=='0'){
					pos=j;break;
				}
			}
			if(pos==-1)break;
			if(k>=pos-now)a[pos]='1',k=k-pos+now,a[now++]='0';
			else {
				a[pos]='1';a[pos-k]='0';break;
			}
			i=pos+1;			
		}
		cout<<a;
		cout<<'\n'; 
	}
	
} 
