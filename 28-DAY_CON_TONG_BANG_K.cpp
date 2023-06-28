#include<bits/stdc++.h> 
    using namespace std;

    void Try(int i, int sum, int idx, int n, int k, int a[], int x[], int &c){
        for(int j = idx; j < n; j++){
            if(sum + a[j] <= k){
                x[i] = a[j];
                sum += x[i];
                if(sum == k){
                    c++;
                    for(int t = 0; t <= i; t++){
                        if(t == 0){
                            cout << "[";
                        }
                        cout << x[t];
                        if(t < i){
                            cout << " ";
                        }
                        if(t == i){
                            cout << "]";
                        }
                    }
                    cout << " ";
                }
                else{
                    Try(i + 1, sum, j + 1, n, k, a, x, c);
                }
                sum -= x[i];
            }
        }
    }
    
    int main(){
        int t;
        cin >> t;
        while(t--){
            int c = 0;
            int n, k;
            cin >> n >> k;
            int a[n];
            int x[100];
            for(int i = 0; i < n; i++){
                cin >> a[i];
            }
            sort(a, a + n);
            Try(0, 0, 0, n, k, a, x, c);
            if(c == 0){
                cout << "-1";
            }
            cout << endl;
        }
    }