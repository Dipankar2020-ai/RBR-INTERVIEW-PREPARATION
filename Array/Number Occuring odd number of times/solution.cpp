Leetcode->
https://leetcode.com/problems/single-number/
Solution:
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int>ans;
        int result=0;
        for(int i=0;i<nums.size();i++)
        {
            result=result^nums[i];
        }
    
        return result;
            
        
    }
};
