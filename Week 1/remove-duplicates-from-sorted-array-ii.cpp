https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int temp=nums[0],flag=1,count=1;
        for(int i=1;i<n;i++)
        {
            if(temp!=nums[i] || count <2)
            {
                if(temp!=nums[i])
                {
                    count=1;
                }
                else
                {
                    count++;
                }
                nums[flag]=nums[i];
                flag++;
                temp=nums[i];
                
            }
        }
        return flag;
    }
};