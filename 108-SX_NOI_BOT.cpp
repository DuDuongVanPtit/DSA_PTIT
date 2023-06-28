#include <bits/stdc++.h>

    using namespace std;
    bool check(int n, int a[]){
        for(int i = 0; i < n - 1; i++){
            if(a[i + 1] < a[i]){
                return false;
            }
        }
        return true;
    }
    int main(){
        int n; 
        cin >> n;
        int a[n];
        for(int &x : a){
            cin >> x;
        }
        int tmp;
        for(int i = 0; i < n - 1; i++){
            for(int j = 0; j < n - 1; j++){
                if(a[j + 1] < a[j]){
                    swap(a[j], a[j + 1]);
                }
            }
            if(!check(n, a)){
                cout << "Buoc " << i + 1 << ": ";
                for(int j = 0; j < n; j++){
                    cout << a[j] << " ";
                }
                cout << endl;
                tmp = i + 1;
            }
        }
        cout << "Buoc " << tmp + 1<< ": "; 
        for(int x : a){
            cout << x  << " ";
        }
    }