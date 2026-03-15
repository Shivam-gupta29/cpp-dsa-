// set bit count 

class Solution {
public:
    int countTotalSetBits(int n) {
        // Implement logic here
        int count = 0;
        int bit;
        for (int i = 1; i <= n; i++) {
           int n=i;
           while(n){
            bit=n&1;
            if(bit){
                count=count+1;

            }
            n>>=1;
           }
        }
        return count;
    }
};