#include<bits/stdc++.h>

using namespace std;
bool ispossible(vector<int>&arr1,int mid,int n,int k){
    if(arr1[0]>mid){
        return false;
    }
    for(int i=1;i<n;i++){
        if((arr1[i]-arr1[i-1])>mid){
            return false;
        }
    }
    int p=k-arr1[n-1];
    if(mid>=2*p){
        return true;
    }
    return false;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr1(n);
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        int e=INT_MAX;
        int l=1;
        int ans=INT_MAX;
        while(l<=e){
            int mid=l+(e-l)/2;
            if(ispossible(arr1,mid,n,k)){
                
                ans=mid;
                e=mid-1;
            }
            else{
                l=mid+1;

            }
        }
       cout<<ans<<endl;

        

    }


}