#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		stack<int>st;
		deque<int>q;
		cin>>n;
		int x;
		for(int i=0; i<3;i++){
			cin>>x;
			q.push_front(x);
		//	total += st[i];
		}
		int moves=0;
		while(!q.empty()){
		    int fcs=q.front(),bcs=q.back(),fc=0,bc=0;
		    while(fcs<=n){
		        fc++;
		        st.push(q.front());
		        q.pop_front();
		        fcs += q.front();
		    }
		    while(!st.empty()){
		        q.push_front(st.top());
		        st.pop();
		    }
		    while(bcs<=n){
		        bc++;
		        st.push(q.back());
		        q.pop_back();
		        bcs += q.back();
		    }
		    while(!st.empty()){
		        q.push_back(st.top());
		        st.pop();
		    }
		   if(fc>=bc){
		       int k=1;
		    while(k<=fc){
		        q.pop_front();
		        k++;
		    }
		   }else{
		       int k=1;
		    while(k<=bc){
		        q.pop_back();
		        k++;
		    }
		}
		moves++;
		}
	cout<<moves<<"\n";
	}
}
