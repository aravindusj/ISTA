https://leetcode.com/problems/remove-duplicates-from-sorted-array/


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        int temp=nums[0],flag=1;
        for(int i=1;i<n;i++)
        {
            if(temp!=nums[i])
            {
                nums[flag]=nums[i];
                flag++;
                temp=nums[i];
            }
        }
        return flag;
    }
};