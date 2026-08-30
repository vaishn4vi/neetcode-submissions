class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==0){
            return 0;
        }
        int maxcount=0;
        int count=0;
        for(int i=1;i<nums.size();i++){
            if((nums[i]-nums[i-1])==1){
                count++;
            }
            else{
                continue;
            }
            if(count>maxcount){
                maxcount=count;
            }
        }
        return maxcount+1;
    }
};
