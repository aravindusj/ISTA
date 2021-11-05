https://leetcode.com/problems/rotate-array/


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        if(n<=1)
        {
            return;
        }
        vector <int> t(n);
        for(int i=0;i<nums.size();i++)
        {
            if(i+k<=n-1)
            {
                t[i+k]=nums[i];
            }
            else
            {
                t[i+k-n]=nums[i];
            }
        }
        nums =t;
    }
};