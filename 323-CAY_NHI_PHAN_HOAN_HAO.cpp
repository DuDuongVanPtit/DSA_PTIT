#include <bits/stdc++.h>
    int parent[10005];
    using namespace std;
    vector <int> ok;
    struct node{
        int val;
        node *left;
        node *right;
        node(int x){
            val = x;
            left = right = NULL;
        }
    };
    void makeroot(node *root, int x, int y, char c){
        if(c == 'L'){
            root -> left = new node(y);
        }
        else{
            root -> right = new node(y);
        }
    }
    void insertnode(node *root, int x, int y, char c){
        if(root == NULL) return;
        if(root -> val == x){
            makeroot(root, x, y, c);
        }
        else{
            insertnode(root -> left, x, y, c);
            insertnode(root -> right, x, y, c);
        }
    }
    int c = 0;
    bool check(node *root){
        queue <node*> q;
        q.push(root);
        while(!q.empty()){
            node *tmp = q.front(); q.pop();
            if(tmp -> left == NULL && tmp -> right != NULL 
            || tmp -> right == NULL && tmp -> left != NULL){
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
    bool check1(node *root){
        if(root -> left == NULL || root -> right == NULL){
            return false;
        }
        vector <int> ok1;
        for(int x : ok){
            int tmp = parent[x];
            int c = 0;
            while(tmp != root ->val){
                c++;
                tmp = parent[tmp];
            }
            ok1.push_back(c);
        }
        for(int i = 1; i < ok1.size(); i++){
            if(ok1[i - 1] != ok1[i]){
                return false;
            }
        }
        return true;
    }
    void nodela(node *root){
        if(root != NULL){
            nodela(root -> left);
            nodela(root -> right);
            if(root -> left == NULL && root -> right == NULL){
                ok.push_back(root -> val);
            }
        }
    }
    int main(){
        int t; 
        cin >> t;
        while(t--){
            int n; cin >> n;
            node *root = NULL;
            while(n--){
                int x, y;
                char c;
                cin >> x >> y >> c;
                parent[y] = x;
                if(root == NULL){
                    root = new node(x);
                    makeroot(root, x, y, c);
                }
                else{
                    insertnode(root, x, y, c);
                }
            }
            nodela(root);
            if(check(root) && check1(root)){
                 cout << "Yes\n";
            }
            else{
                cout << "No\n";
            }
            ok.clear();
        }
    }