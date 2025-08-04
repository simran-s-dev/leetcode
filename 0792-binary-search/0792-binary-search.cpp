class Solution {
public:
    int search(vector<int>& nums, int target) {
         int n=nums.size();
        int mid = n/2;
        int i=0,j=0;
      if(nums[mid]==target) return mid;
      if(nums[mid]>target ){
        for(i=0;i<mid;i++){
            if(nums[i]==target) return i;

        }
      }
        if(nums[mid]<target ){
        for(i=mid+1;i<n;i++){
            if(nums[i]==target) return i;

        }
      }
    return -1;
        
    
    }
};