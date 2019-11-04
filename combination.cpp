B. Minimize the Permutation
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given a permutation of length n. Recall that the permutation is an array consisting of n distinct integers from 1 to n in arbitrary order. For example, [2,3,1,5,4] is a permutation, but [1,2,2] is not a permutation (2 appears twice in the array) and [1,3,4] is also not a permutation (n=3 but there is 4 in the array).

You can perform at most n-1 operations with the given permutation (it is possible that you don't perform any operations at all). The i-th operation allows you to swap elements of the given permutation on positions i and i+1. Each operation can be performed at most once. The operations can be performed in arbitrary order.

Your task is to find the lexicographically minimum possible permutation obtained by performing some of the given operations in some order.

You can see the definition of the lexicographical order in the notes section.

You have to answer q independent test cases.

For example, let's consider the permutation [5,4,1,3,2]. The minimum possible permutation we can obtain is [1,5,2,4,3] and we can do it in the following way:

perform the second operation (swap the second and the third elements) and obtain the permutation [5,1,4,3,2];
perform the fourth operation (swap the fourth and the fifth elements) and obtain the permutation [5,1,4,2,3];
perform the third operation (swap the third and the fourth elements) and obtain the permutation [5,1,2,4,3].
perform the first operation (swap the first and the second elements) and obtain the permutation [1,5,2,4,3];
Another example is [1,2,4,3]. The minimum possible permutation we can obtain is [1,2,3,4] by performing the third operation (swap the third and the fourth elements).

Input
The first line of the input contains one integer q (1=q=100) — the number of test cases. Then q test cases follow.

The first line of the test case contains one integer n (1=n=100) — the number of elements in the permutation.

The second line of the test case contains n distinct integers from 1 to n — the given permutation.

Output
For each test case, print the answer on it — the lexicograhically minimum possible permutation obtained by performing some of the given operations in some order.

Example
inputCopy
4
5
5 4 1 3 2
4
1 2 4 3
1
1
4
4 3 2 1
outputCopy
1 5 2 4 3 
1 2 3 4 
1 
1 4 3 2 
Note
Recall that the permutation p of length n is lexicographically less than the permutation q of length n if there is such index i=n that for all j from 1 to i-1 the condition pj=qj is satisfied, and pi<qi. For example:

p=[1,3,5,2,4] is less than q=[1,3,5,4,2] (such i=4 exists, that pi<qi and for each j<i holds pj=qj),
p=[1,2] is less than q=[2,1] (such i=1 exists, that pi<qi and for each j<i holds pj=qj).





#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	vector<int>arr(n);
	vector<bool>vis(n,false);
	int count=0;
	int min1= 1;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int index=-1;
	for(int i=0; i<n; i++){
		if(arr[i]==min1){
		 	index = i;
		 	break;
		 }
	}
	bool newm = false;
	while(count<n){
	if(newm == true){
		for(int i=0; i<n; i++){
		if(arr[i]==min1){
		 	index = i;
		 	break;
		 	newm = false; 
		 }
	}
	}
	bool go =false;
	for(int i=0; i<n-1; i++){
		if(arr[i]>arr[i+1] && !vis[i]){
			go = true;
			break;
		}
	}
	if(count==n-1 || go==false){
		break;
	}
	if(index-1<0 || vis[index-1]  || arr[index-1]<arr[index]){
		min1++;
		newm = true;
		continue;
	}
	swap(arr[index-1],arr[index]);
	vis[index-1]= true;
	index = index-1;
	count++;
	}
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" "; 
	}cout<<"\n";
	}
		
	return 0;
}
