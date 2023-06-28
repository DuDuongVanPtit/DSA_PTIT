#include <bits/stdc++.h>
	using namespace std;
	struct node{
		int val;
		node *left;
		node *right;
		node(int x){
			val = x;
			left = right = NULL;
		}
	};
	node *build(node *root, int x){
		if(root == NULL){
			root = new node(x);
		}
		else{
			if(x > root -> val){
				root -> right = build(root -> right, x);
			}
			else{
				root -> left = build(root -> left, x);
			}
		}
		return root;
	}
	void duyet(node *root){
		if(root == NULL) return;
		duyet(root -> left);
		duyet(root -> right);
		cout << root -> val << " ";
	}
	int main(){
		int t;  cin >> t;
		while(t--){
			int n; cin >> n;
			node *root = NULL;
			for(int i = 0; i < n; i++){
				int x; cin >> x;
				root = build(root, x);
			}
			duyet(root);
			cout << endl;
		}
	}
//1
//12
//44 18 13 15 37 23 40 88 59 55 71 108
