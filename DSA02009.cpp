#include<bits/stdc++.h> 
	using namespace std; 
	int n,k, s, a[100]; 
	int main(){ 
		int t; cin>> t; 
		while(t--){ 
			cin>> n>>k; 
			for(int i=1;i<=n;i++){ 
				cin>> a[i]; s+=a[i]; 
			} 
			if(s%k==0) cout<<"1\n";
			else cout<< "0\n";
			s=0; 
			cout<< endl; 
		} 
	}
