#include <bits/stdc++.h>
    using namespace std;
    int parent[10005];
    vector <int> nodeleave;
    struct node{
        int val;
        node *left, *right;
        node(int x){
            val = x;
            left = right = NULL;
        }
    };
    void addnode(node *root, int x, int y, char c){
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
            addnode(root -> left, x, y, c);
            addnode(root -> right, x, y, c);
        }
    }
    void findleave(node *root){
        if(root == NULL) return;
        if(root -> left == NULL && root -> right == NULL){
            nodeleave.push_back(root -> val);
        }
        findleave(root -> left);
        findleave(root -> right);
    }
    bool ans(vector<int> check){
        for(int i = 0; i < check.size() - 1; i++){
            if(check[i] != check[i + 1]){
                return false;
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
                parent[y] = x;
                if(root == NULL){
                    root = new node(x);
                }
                addnode(root, x, y, c);
            }
            findleave(root);
            vector <int> check;
            for(int x : nodeleave){
                int c = 1;
                int tmp = parent[x];
                while(tmp != root -> val){
                    c++;
                    tmp = parent[tmp];
                }
                check.push_back(c);
            }   
            if(ans(check)){
                cout << "1\n";
            }
            else{
                cout << "0\n";
            }
            memset(parent, 0, sizeof(parent));
            nodeleave.clear();
        }
    }