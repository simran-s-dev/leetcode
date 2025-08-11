class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int n = nums.size();
        long long totalEven = 0, totalOdd = 0;

        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) totalEven += nums[i];
            else totalOdd += nums[i];
        }

        int ans = 0;
        long long leftEven = 0, leftOdd = 0;

        for (int i = 0; i < n; ++i) {
          
            if (i % 2 == 0) totalEven -= nums[i];
            else totalOdd -= nums[i];

           
            if (leftEven + totalOdd == leftOdd + totalEven) ans++;

       
            if (i % 2 == 0) leftEven += nums[i];
            else leftOdd += nums[i];
        }

        return ans;
    }
};
