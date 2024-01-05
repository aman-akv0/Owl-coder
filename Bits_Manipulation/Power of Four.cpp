class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0){
            return false;
        }else if((n & (n-1))==0 && (n-1)%3==0){
            return true;
        }else{
            return false;
        }
        
    }
};


or
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0){
            return false;
        while(n){
          if(n==1){
            return true;
          }else if((n & (n-1))==0){
            n=n>>2;
          }
        
    }
};
