/*
    Given an array arr[] containing 2*n+2 positive numbers, out of which 2*n numbers exist in pairs 
    whereas the other two number occur exactly once and are distinct. Find the other two numbers. 
    Return the answer in increasing order.
*/

class Solution {
    public:
      vector<int> singleNumber(vector<int>& arr) {
          int xorsum=0,setBit=0;
          for(auto it : arr) xorsum^=it;
          for(int i=0;i<=32;i++){
              int num = 1<<i;
              if(num&xorsum){
                  setBit = num;
                  break;
              }
          }
          int first=0,second=0;
          for(auto it : arr){
              if(setBit&it) first^=it;
              else second^=it;
          }
          if(first<second) return {first,second};
          else return {second,first};
      }
  };