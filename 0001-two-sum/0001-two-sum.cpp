class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
     vector<int>ans;
     unordered_map<int,int>mp;
     for(int i=0;i<nums.size();i++){
        int first=nums[i];
        int sec=tar-first;
        if(mp.find(sec)!=mp.end()){
            ans.push_back(i);
            ans.push_back(mp[sec]);
            break;
        }
        mp[nums[i]]=i;
     }
     return ans;
    }
};