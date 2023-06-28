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
    bool check(node *root){
        queue <node*> q;
        q.push(root);
        while(!q.empty()){
            node *tmp = q.front(); q.pop();
            if(tmp -> left == NULL && tmp -> right != NULL || tmp -> left != NULL && tmp -> right == NULL){
                return false;
            }
            if(tmp -> left != NULL){
                q.push(tmp -> left);
            }
            if(tmp -> right != NULL){
                q.push(tmp -> right);
            }
        }
        return true;
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
            if(check(root)) cout << "1\n";
            else cout << "0\n";
        }
    }