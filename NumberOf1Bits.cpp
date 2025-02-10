/*
    Given a positive integer n. Your task is to return the count of set bits.
*/

class Solution {
public:
    int setBits(int n) {
        int ans=0;
        while(n){
            ans+=n&1;
            n=n>>1;
        }
        return ans;
    }
};