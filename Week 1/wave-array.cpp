https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1


class Solution{  
    public:
    void convertToWave(vector<int>& arr, int n){
        
        // Your code here
        int temp;
        for(int i=0;i<n-1;i=i+2)
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
};