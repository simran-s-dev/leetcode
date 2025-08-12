class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int avg_diff;
        long long sum =0;
        long long rem_sum=0;
        for(int i=0;i<nums.size();i++){
               rem_sum+=nums[i];
        }
        int ans=INT_MAX;
        int ansIndex;
        for(int i=0;i<nums.size();i++){
            sum +=nums[i];
            rem_sum-= nums[i]; 
            int num=i+1;
            if (num != nums.size()) {
           avg_diff = (sum / num) - (rem_sum / (nums.size() - num));
            if (avg_diff < 0) avg_diff = -avg_diff; 
          } else {
             avg_diff = sum / num; 
        }
                   if (avg_diff < ans) { 
                ans = avg_diff;
                ansIndex = i;
            }
        }
        return ansIndex; 
    }
};
