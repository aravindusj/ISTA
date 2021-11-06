https://leetcode.com/problems/move-zeroes/submissions/


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size(),pos=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                nums[pos]=nums[i];
                if(pos!=i)
                {
                    nums[i]=0;                    
                }
                pos++;
            }
        }
    }
};