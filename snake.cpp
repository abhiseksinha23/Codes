#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	char board[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			board[i][j]= '.';
		}
	}
		int i=0,j=0;
		bool right = true;
	while(i<n){
		if(i%2==0){
			for(int k=0; k<m;k++){
				board[i][k] = '#';
			}
		}else{
			if(right){
				board[i][m-1] ='#';
			}else{
				board[i][0] = '#';
			}
			right = !right;
		}
		i++;
	}
		for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<board[i][j];
		}cout<<"\n";
	}
	return 0;
}
