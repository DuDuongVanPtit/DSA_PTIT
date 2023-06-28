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
    bool check(node *root, node *root1){
        if(root -> val != root1 -> val){
            return false;
        }
        queue <node*>  q, q1;
        q.push(root);
        q1.push(root1);
        while(!q.empty() && !q1.empty()){
            node *tmp = q.front(), *tmp1 = q1.front();q.pop(), q1.pop();
            if(tmp -> left != NULL && tmp1 -> left != NULL){
                q.push(tmp -> left); q1.push(tmp1 -> left);
                if(tmp -> left -> val != tmp1 -> left -> val){
                    return false;
                }
            }
            else if(tmp -> left == NULL && tmp1 -> left != NULL || tmp -> left != NULL && tmp1 -> left == NULL){
                return false;
            }
            if(tmp -> right != NULL && tmp1 -> right != NULL){
                q.push(tmp -> right); q1.push(tmp1 -> right);
                if(tmp -> right -> val != tmp1 -> right -> val){
                    return false;
                }
            }
            else if(tmp -> right == NULL && tmp1 -> right != NULL || tmp -> right != NULL && tmp1 -> right == NULL){
                return false;
            }
        }
        if(q.empty() && q1.empty()){
            return true;
        }
        return false;
    }
    int main(){
        int t; cin >> t;
        while(t--){
            int n; cin >> n;
            node *root = NULL, *root1 = NULL;
            while(n--){
                int x, y; 
                char c;
                cin >> x >> y >> c;
                if(root == NULL){
                    root = new node(x);
                }
                insertnode(root, x, y, c);
            }
            int n1; cin >> n1;
            while(n1--){
                int x, y;
                char c;
                cin >> x >> y >> c;
                if(root1 == NULL){
                    root1 = new node(x);
                }
                insertnode(root1, x, y, c);
            }
            if(check(root, root1)) cout << "1\n";
            else cout << "0\n";
        }
    }