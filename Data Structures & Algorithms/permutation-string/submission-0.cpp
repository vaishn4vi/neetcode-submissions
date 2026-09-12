class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>mp;
        for(int i=0;i<s2.size();i++){
            mp[s2[i]]++;
        }
        for(int i=0;i<s1.size();i++){
            mp[s1[i]]--;
        }
       for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second==0){
            return true;
        }
       }
        return false;
    }
};
