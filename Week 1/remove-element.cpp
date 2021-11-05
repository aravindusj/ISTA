https://leetcode.com/problems/remove-element/


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
         int p1=0,p2=0,n=nums.size(),j=0,k=0;
         for(int i=0;i<nums.size();i++)
         {
              if(nums[i]==val)
              {
                  j=i+1;
                  while(j<n)
                  {
                      if(nums[j]!=val)
                      {
                          k++;
                          nums[i]=nums[j];
                          nums[j]=val;
                          break;
                      }
                      j++;
                  }
              }
              else
              {
                  k++;
               }
         }
        return k;
    }
};