class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(m.count(target-nums[i]))
                return {m[target-nums[i]],i};
            else
                m[nums[i]]=i;
        }
        
        return {};
        
    }
};