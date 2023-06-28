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
    void duyet(node *root){
        stack <node*> st1, st2;
        st1.push(root);
        while(!st1.empty() || !st2.empty()){
            while(!st1.empty()){
                node *top = st1.top(); st1.pop();
                cout << top -> val << " ";
                if(top -> right != NULL){
                    st2.push(top -> right);
                }
                if(top -> left != NULL){
                    st2.push(top -> left);
                }
            }
            while(!st2.empty()){
                node *top = st2.top(); st2.pop();
                cout << top -> val << " ";
                if(top -> left != NULL){
                    st1.push(top -> left);
                }
                if(top -> right != NULL){
                    st1.push(top -> right);
                }
            }
        }
        cout << endl;
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
            duyet(root);
        }
    }