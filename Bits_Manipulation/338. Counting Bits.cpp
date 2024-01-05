class Solution {
public:
    int count(int n) {
        int c = 0;
        while (n != 0) {
            int rb = n & -n;
            n -= rb;
            c++;
        }
        return c;
    }

    vector<int> countBits(int n) {
        vector<int> v(n + 1);
        for (int i = 0; i <= n; i++) {
            v[i] = count(i);
        }
        return v;
    }
};
