#include<iostream>
#include<vector>
using namespace std;
int missingNumber(vector<int>& nums){
        for(int i=0;i<=nums.size();i++){
            int flag=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]==i){
                    flag=1;
                    break;


                }
            }
            if(flag==0){
                return i;

            }
        }

    }
int main(){
    int n,n1;
    vector<int>nums;
    cout<<"enter the size of the vector "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter the number ";
        cin>>n1;
        nums.push_back(n1);


    }
    int v=missingNumber(nums);
    cout<<v<<endl;

}