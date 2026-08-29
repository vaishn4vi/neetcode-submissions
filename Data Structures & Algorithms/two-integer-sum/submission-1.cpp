class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;

        for(int i = 0; i < nums.size(); i++) {
            if(mp.find(nums[i]) == mp.end()) {
                mp[nums[i]] = i;
            }

            int c = target - nums[i];

            if(mp.find(c) != mp.end() && i != mp[c]) {
                return {mp[c], i};
            }
        }

        return {};
    }
};