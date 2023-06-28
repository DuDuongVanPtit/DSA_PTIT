#include <bits/stdc++.h>
    using namespace std;
    struct node{
        char val;
        node *left;
        node *right;
        node(char x){
            val = x;
            left = right = NULL;
        }
    };
    void inorder(node *root){
        if(root == NULL) return;
        inorder(root -> left);
        cout << root -> val;
        inorder(root -> right);
    }
    int main(){
        int t;
        cin >> t;
        while(t--){
            string s;
            cin >> s;
            stack <node*> st;
            for(int i = 0; i < s.size(); i++){
                if(isalpha(s[i])){
                    node *tmp = new node(s[i]);
                    st.push(tmp);
                }
                else{
                    node *nr = st.top(); st.pop();
                    node *nl = st.top(); st.pop();
                    node *tmp = new node(s[i]);
                    tmp -> left = nl;
                    tmp -> right = nr;
                    st.push(tmp);
                }
            }
            node *root = st.top();
            inorder(root);
            cout << endl;
        }
    }