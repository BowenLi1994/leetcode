class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int candidate,count=0;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                candidate=nums[i];
                // continue;
            }
            if(nums[i]==candidate){
                count++;
            }
            else{
                count--;
            }
        }
        return candidate;
    }
};