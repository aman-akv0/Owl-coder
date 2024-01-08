#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int minImpossibleOR(std::vector<int>& nums) {
    int ans = 1;
    std::unordered_set<int> numsSet(nums.begin(), nums.end());

    while (numsSet.count(ans)) {
        ans <<= 1;
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    std::vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = minImpossibleOR(nums);

    std::cout << result << std::endl;

    return 0;
}
