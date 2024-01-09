int findDuplicate(vector<int>& nums) {
         int result = 0;

    for (int num : nums) {
        result ^= num;
    }
    for (int i = 1; i < nums.size(); i++) {
        result ^= i;
    }

    return result;
    }



or


int findDuplicate(vector<int>& nums) {
        unOrdered<int , int > mp;
        for(int num : nums){
            mp[nums]++;
        }
        for(auto it : mp){
            if(it.second>1){
                return it.first;
            }
        }return -1;
    }


