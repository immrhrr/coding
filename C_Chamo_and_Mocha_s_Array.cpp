#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        int low;int high;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==2){
            cout<<min(a[0],a[1])<<endl;
        }
        else{
            int ans=INT_MIN;
            vector<int>temp(3);
        for(int i=1;i<n-1;i++){
            temp[0]=a[i-1];
            temp[1]=a[i];
            temp[2]=a[i+1];
            sort(temp.begin(),temp.end());
            ans=max(ans,temp[1]);
            
        }
        cout<<ans<<endl;

        }
    }
}