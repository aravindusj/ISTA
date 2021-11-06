https://leetcode.com/problems/missing-number/


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0,flag=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(nums[i]==0)
            {
                flag=1;
            }
        }
        int temp=nums.size()*(nums.size()+1)/2;
        if(flag==0)
        {
            return 0;
        }
        if(sum != temp)
        {
            return temp-sum;
        }
        else
        {
            return nums.size();
        }
    }
};