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
    void makeroot(node *root, int u, int v, char c){
        if(c == 'L'){
            root -> left = new node(v);
        }
        else{
            root -> right = new node(v);
        }
    }
    void insertnode(node *root, int u, int v, char c){
        if(root == NULL) return;
        if(root -> val == u){
            makeroot(root, u, v, c);
        }
        else{
            insertnode(root -> left, u, v, c);
            insertnode(root -> right, u, v, c);
        }

    }
    void duyet(node *root){
        queue <node*> q;
        q.push(root);
        cout << root -> val << " ";
        while(!q.empty()){
            node *tmp = q.front();
            q.pop();
            if(tmp -> left != NULL){
                q.push(tmp -> left);
                cout << tmp -> left -> val << " ";
            }
            if(tmp -> right != NULL){
                q.push(tmp -> right);
                cout << tmp -> right -> val << " ";
            }
        }
    }
    int main(){
        int t; cin >> t;
        while(t--){
            int n; cin >> n;
            node *root = NULL;
            while(n--){
                int u, v; char c; cin >> u >> v >> c;
                if(root == NULL){
                    root = new node(u);
                    makeroot(root, u, v, c);
                }
                else{
                    insertnode(root, u, v, c);
                }
            }
            duyet(root);
            cout << endl;
        }
    }