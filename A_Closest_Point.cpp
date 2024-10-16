#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
//using namespace __gnu_pbds;
#define int long long
#define ll long long
//#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
const int M=1e9+7;

int binexp(int a,int b){
    int ans=1;
    while(b){
        if(b&1){
            ans=(ans*1ll*a)%M;
        }
        a=(a*1ll*a)%M;
        b>>=1;
    }
    return ans;
}

int modMulInv(int a,int b,int m){
    int ans=1;
    while(b){
        if(b&1){
            ans=(ans*1ll*a)%m;
        }
        a=(a*1ll*a)%m;
        b>>=1;
    }
    return ans;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/

    ll tt;
    cin>>tt;
    while(tt--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n>2){
            cout<<"NO"<<endl;
        }
        else if(n==2){
            if(abs(a[0]-a[1])==1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
}