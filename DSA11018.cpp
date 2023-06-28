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
	void preorder(node *root){
		if(root == NULL) return;
		cout << root -> val << " ";
		preorder(root -> left);
		preorder(root -> right);
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
			preorder(root);
			cout << endl;
		}
	}
