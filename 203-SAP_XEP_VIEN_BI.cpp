#include <bits/stdc++.h>
    using namespace std;

    int main(){
        int n;
        cin >> n;
        map <char, int> mp;
        string t;
        cin >> t;
		char a[n];
        for(int i = 0; i < n; i++){
            a[i] = t[i];
            mp[a[i]]++;
        }
        int c = 0;
        int i = 0;
        while(i < n && mp['X'] > 0 || mp['T'] > 0){
            if(a[i] == 'X'){
                i++;
                mp['X']--;
            }
			else if(a[i] == 'T'){
                if(mp['X'] > 0){
                    for(int j = n - 1; j > i; j--){
                        if(a[j] == 'X'){
                        	c++;
                            swap(a[i], a[j]);
                            mp['X']--;
                            i++;
                            break;
                        }
                    }
                }
                else{
                    i++;
                    mp['T']--;
                }
            }
            else if(a[i] == 'D'){
                if(mp['X'] > 0){
                    for(int j = n - 1; j > i; j--){
                        if(a[j] == 'X'){
                        	c++;
                            swap(a[i], a[j]);
                            mp['X']--;
                            i++;
                            break;
                        }
                    }
                }
                else if(mp['T'] > 0){
                    for(int j = n - 1; j > i; j--){
                        if(a[j] == 'T'){
                        	c++;
                            swap(a[i], a[j]);
                            mp['T']--;
                            i++;
                            break;
                        }
                    }
                }
                else{
                    i++;
                }
            }
        }
        cout << c << endl;
    }