#include <bits/stdc++.h>
    using namespace std;
    int n, k;
    int x[100];
    int nreal;
    void Try(int i, string areal[]){
        for(int j = x[i - 1] + 1; j <= nreal - k + i; j++){
            x[i] = j;
            if(i == k){
                for(int pos = 1; pos <= k; pos++){
                    cout << areal[x[pos] - 1] << " ";
                }
                cout << endl;
            }
            else{
                Try(i + 1 , areal);
            }
        }
    }
    int main(){
        cin >> n >> k;
        string a[n];
        set <string> se;
        for(string &x : a){
            cin >> x;
            se.insert(x);
        }
        nreal = se.size();
        string areal[nreal];
        int i = 0;
        for(string x : se){
            areal[i++] = x;
        }
        Try(1, areal);
    }