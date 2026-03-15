#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
 string factorial(int N) {


     // vector me store kar lo yar 
     
    // Implement your solution here
    vector<int> ans = {1};
    int carry = 0;
    if (N <= 1) {
      return "1";
    }
    for (int i = 2; i <= N; i++) {
      
      for (int j = 0; j < ans.size(); j++) {

        int x = ans[j] * i + carry;
        ans[j] = x % 10;
        carry = x / 10;
      }
      while (carry) {
        ans.push_back(carry % 10);
        carry /= 10;
      }
    }
    string result;
    for (int i = ans.size() - 1; i >= 0; i--) {
      result.push_back('0' + ans[i]);
    }
    return result;
  }
int main(){
    string ans=factorial(5);
    cout<<ans;
    
}


#include<algorithm>
class Solution {
public:
    vector<int> addTwoNumbers(vector<int>& nums1, vector<int>& nums2) { 
        int i=nums1.size()-1;
        int j=nums2.size()-1;
        int carry=0;
        vector<int>ans;

        while(i>=0 &&j>=0){
            int x=nums1[i]+nums2[j]+carry;
            int digit=x%10;
            ans.push_back(digit);
            carry=x/10;
            i--;
            j--;

        }
        while(i>=0){
            int x=nums1[i]+carry;
            int digit=x%10;
            ans.push_back(digit);
            carry=x/10;
            i--;
            


        }
        while(j>=0){
            int x=nums2[j]+carry;
            int digit=x%10;
            ans.push_back(digit);
            carry=x/10;
            
            j--;

        }
        while(carry){
            ans.push_back(carry%10);
            carry=carry/10;
        }
        //reverse(ans.begin(),ans.end());
        return ans;


        // Implement the function to add two numbers represented by nums1 and nums2
    }
};
