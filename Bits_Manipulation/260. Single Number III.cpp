class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        unsigned int p = 0;  // Use unsigned int to accommodate negation

        for (int val : nums) {
            p = p ^ (unsigned int)val;  // Cast to unsigned int for negation
        }

        unsigned int rb = p & (-p);  // Negation with unsigned int
        int x = 0, y = 0;

        for (int val : nums) {
            if ((val & rb) == 0) {
                x = x ^ val;
            } else {
                y = y ^ val;
            }
        }

        return {x, y};  // Use direct vector initialization for conciseness
    }
};
