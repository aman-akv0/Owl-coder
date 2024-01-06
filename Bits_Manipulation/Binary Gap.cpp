class Solution {
public:
    int binaryGap(int n) {
        int ans = 0;
        int first = -1; 
        int second = -1; 

        if ((n & (n - 1)) == 0) {
            return 0;
        } else {
            for (int i = 0; i < 32; i++) {
                if (n & (1 << i)) {
                    first = i;
                    if (second != -1) {
                        ans = max(ans, first - second);
                    }
                    second = first;
                }
            }
            return ans;
        }
    }
};
