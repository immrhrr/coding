#include <bits/stdc++.h>
using namespace std;

bool canNavigate(int n, int m, int k, const string& s) {
    int i =-1;
    bool f=false;
    for(int j=m;j>0;j--){
        if(i+j>=n){
            return true;
        }
        if(s[i+j]=='L'){
            i+=j;
            f=true;
            break;
        }
    }
    if(!f){
         for(int j=m;j>0;j--){
        if(i+j>=n){
            return true;
        }
        if(s[i+j]=='W'){
            i+=j;
            f=true;
            break;
        }
    }

    }
    if(!f){
        return false;
    }

    while (i < n) {
        while (i < n && s[i] == 'W') {
            k--;
              if (k < 0) {
                return false;
            }
            else{
            i++;
            }
        }

        if (i < n && s[i] == 'C') {
            return false;
        }

        bool flag = false;
        if (i < n && s[i] == 'L') {
            for (int j = m; j > 0; j--) {
                if (i + j >= n) {
                    return true;
                } else if (s[i + j] == 'L') {
                    i += j;
                    flag = true;
                    break;
                }
            }

            if (!flag) {
                for (int j = m; j > 0; j--) {
                    if (i + j >= n) {
                        return true;
                    } else if (s[i + j] == 'W') {
                        i += j;
                        flag = true;
                        break;
                    }
                }
            }
        }

        if (!flag&&i<n) {
            return false;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;
       // s='L'+s;
        //n=n+1;

        if (canNavigate(n, m, k, s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
