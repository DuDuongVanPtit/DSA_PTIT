#include <bits/stdc++.h>

    using namespace std;
    int main(){
        int n;
        cin >> n;
        int a[n];
        for(int &x : a){
            cin >> x;
        }
        int k = 0;
        cout << "Buoc " << k  << ": ";
        cout << a[0] << endl;
        for(int i = 1; i < n; i++){
            int pos = i - 1;
            int value = a[i];
            while(pos >= 0 && a[pos] > value){
                swap(a[pos], a[pos + 1]);
                pos--;
            }
            k++;
            cout << "Buoc " << k  << ": ";
            for(int j = 0; j <= i; j++){
                cout << a[j] << " ";
            }
            cout << endl;
        }
    }