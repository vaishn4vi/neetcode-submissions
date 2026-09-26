class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int left=0;
        int ans=0;
        for(int right=0;right<s.size();right++){
            mp[s[right]]++;
            int maxfreq=0;
            for(int i=left;i<=right;i++){
                maxfreq= max(maxfreq,mp[s[i]]);
            }
            while((right-left+1)-maxfreq>k){
                mp[s[left]]--;
                left++;
                 maxfreq=0;
                for(int i=left;i<=right;i++){
                    maxfreq= max(maxfreq,mp[s[i]]);
                }
            }
            ans= max(ans, right-left+1);
        }
        return ans;
    }
};
