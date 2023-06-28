#include <bits/stdc++.h>
	using namespace std;
	struct node{
		int val;
		node *left, *right;
		node(int x){
			val = x;
			left = right = NULL;
		}
	};
	void insertnode(node *root, int x, int y, char c){
		if(root == NULL) return;
		if(root -> val == x){
			if(c == 'L'){
				root -> left = new node(y);
			}
			else{
				root -> right = new node(y);
			}
		}
		else{
			insertnode(root -> left, x, y, c);
			insertnode(root -> right, x, y, c);
		}
	}
	void insert_binary_tree(node* &binary_tree, int val){
		if(binary_tree == NULL) binary_tree = new node(val);
		else{
			if(val < binary_tree -> val) insert_binary_tree(binary_tree -> left, val);
			else insert_binary_tree(binary_tree -> right, val);
		}
	}
	void postorder(node *root, node* &binary_tree){
		if(root != NULL){
			postorder(root -> left, binary_tree);
			postorder(root -> right, binary_tree);
			insert_binary_tree(binary_tree, root -> val);
		}
	}
	void inorder(node *binary_tree){
		if(binary_tree == NULL) return;
		inorder(binary_tree -> left);
		cout << binary_tree -> val << " ";
		inorder(binary_tree -> right);
	}
	int main(){
		int t; cin >> t; 
		while(t--){
			int n; cin >> n;
			node *root = NULL;
			while(n--){
				int x, y;
				char c;
				cin >> x >> y >> c;
				if(root == NULL){
					root = new node(x);
				}
				insertnode(root, x, y, c);
			}
			node *binary_tree = NULL;
			postorder(root, binary_tree);
			inorder(binary_tree);
			cout << endl;
		}
	}
