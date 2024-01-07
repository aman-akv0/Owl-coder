class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int n3 = -1, n3p1 = 0, n3p2 = 0;
        
        for (int i = 0; i < n; i++) {
            int cn3 = nums[i] & n3;
            int cn3p1 = nums[i] & n3p1;
            int cn3p2 = nums[i] & n3p2;
            
            n3 = n3 & ~cn3;
            n3p1 = n3p1 | cn3;
            
            n3p1 = n3p1 & ~cn3p1;
            n3p2 = n3p2 | cn3p1; 
            
            n3p2 = n3p2 & ~cn3p2;
            n3 = n3 | cn3p2;
        }
        
       
        return n3p1;
    }
};
