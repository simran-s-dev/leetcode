class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> temp;
        int j= n;
        int i=0;
        while(i<n && j<2*n){
          temp.push_back(nums[i]);
          temp.push_back(nums[j]);
          j++;
          i++;
        }
        return temp;
    }
};