#include<vector>
#include<iostream>
using namespace std;


    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int total = n * n;
        vector<int> freq(total + 1, 0); // To count occurrences
        vector<int> ans(2, 0);          // ans[0]=repeated, ans[1]=missing

        // Count frequencies
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                freq[grid[i][j]]++;
            }
        }

        // Find repeated and missing
        for (int i = 1; i <= total; i++) {
            if (freq[i] == 2) ans[0] = i; // repeated
            if (freq[i] == 0) ans[1] = i; // missing
        }

        return ans;
    }
int main(){
    vector<vector<int>>ans={{1,2},{2,2}};
    vector<int>ans1=findMissingAndRepeatedValues(ans);
    for(auto ch:ans1){
        cout<<ch<<"  ";
    }
}
